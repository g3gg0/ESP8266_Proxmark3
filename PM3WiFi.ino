/*
    SPI Slave Demo Sketch
    Connect the SPI Master device to the following pins on the esp8266:

    GPIO    NodeMCU   Name  |   Uno
  ===================================
     15       D8       SS   |   D10
     13       D7      MOSI  |   D11
     12       D6      MISO  |   D12
     14       D5      SCK   |   D13

    Note: If the ESP is booting at a moment when the SPI Master has the Select line HIGH (deselected)
    the ESP8266 WILL FAIL to boot!
    See SPISlave_SafeMaster example for possible workaround
*/

#include "SPISlave.h"


void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);

  Serial.printf("\n\n\n");

  Serial.printf("[i] SDK:          '%s'\n", ESP.getSdkVersion());
  Serial.printf("[i] CPU Speed:    %d MHz\n", ESP.getCpuFreqMHz());
  Serial.printf("[i] Flash Mode:   %08X\n", ESP.getFlashChipMode());
  Serial.printf("[i] Flash Size:   %08X\n", ESP.getFlashChipSize());
  Serial.printf("[i] Flash Speed:  %d MHz\n", ESP.getFlashChipSpeed() / 1000000);
  Serial.printf("\n");
  Serial.printf("[i] Starting\n");

  Serial.printf("[i]   Setup WiFi\n");
  wifi_setup();
  Serial.printf("[i]   Setup OTA\n");
  ota_setup();
  Serial.printf("[i]   Setup SPI\n");
  spi_setup();
  
  Serial.println("Setup done");
}

uint32_t main_loop = 0;

void loop()
{
  bool hasWork = false;

  hasWork |= wifi_loop();
  hasWork |= ota_loop();
  hasWork |= spi_loop();

  if(!hasWork)
  {
    delay(10);
  }

  if(main_loop++ > 1000)
  {
    Serial.println("still alive");
    main_loop = 0;
    pm3_check_version();
  }
}


