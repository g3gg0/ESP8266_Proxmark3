
uint32_t spi_recv_pos = 0;
uint32_t spi_recv_len = 0;
uint32_t spi_send_pos = 0;
uint32_t spi_send_len = 0;

uint32_t spi_recv_buf_align[(512+16 + 16)/4];
uint8_t *spi_recv_buf = (uint8_t*)spi_recv_buf_align;
uint32_t spi_send_buf_align[(512+16 + 16)/4];
uint8_t *spi_send_buf = (uint8_t*)spi_send_buf_align;

bool have_recv_data = false;
bool have_send_data = false;

void spi_setup()
{
  SPISlave.onData([](uint8_t * data, size_t len) {

    if(spi_recv_pos + len > sizeof(spi_recv_buf_align))
    {
        Serial.printf("[E] Receive buffer overflow\n");
    }
    else
    {
        memcpy(&spi_recv_buf[spi_recv_pos], data, len);
    }
    spi_recv_pos += len;
    SPISlave.setStatus(spi_recv_pos);

    if(spi_recv_pos >= spi_recv_len && spi_recv_pos > 0)
    {
        have_recv_data = true;
    }
  });

  SPISlave.onDataSent([]() {
    spi_send_pos += 32;

    if(spi_send_pos >= spi_send_len)
    {
      spi_send_pos = 0;
      spi_send_len = 0;
      SPISlave.setStatus(0);
    }
    else
    {
      SPISlave.setData(&spi_send_buf[spi_send_pos], spi_send_len - spi_send_pos);
      SPISlave.setStatus(0xE000 | (spi_send_len - spi_send_pos));
    }
  });

  SPISlave.onStatus([](uint32_t data) {
    if((data >> 12) == 0x0E)
    {
      spi_recv_len = data & 0x0FFF;
      spi_recv_pos = 0;
      SPISlave.setStatus(spi_recv_pos);
    }
    else
    {
        Serial.printf("Status: 0x%08X\n", data);
    }
  });

  SPISlave.onStatusSent([]() {
  });

  SPISlave.begin();

  // bugfix according to https://www.esp8266.com/viewtopic.php?f=32&t=10579&start=12
  SPI1C2 |= 1 << SPIC2MISODM_S;
  
  SPISlave.setStatus(0);

}

void spi_send(uint8_t *buf, uint32_t len)
{
  Serial.printf("[SPI] Sending %d byte\n", len);
  spi_send_pos = 0;
  spi_send_len = len;
  memcpy(spi_send_buf, buf, len);
  SPISlave.setData(spi_send_buf, spi_send_len);
  SPISlave.setStatus(0xE000 | spi_send_len);
}

bool spi_loop()
{
  if(have_recv_data)
  {
    have_recv_data = false;
    pm3_parse(spi_recv_buf);
  }

  return false;
}


