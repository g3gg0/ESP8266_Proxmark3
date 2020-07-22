

// For the bootloader
#define CMD_DEVICE_INFO                                                   0x0000
#define CMD_SETUP_WRITE                                                   0x0001
#define CMD_FINISH_WRITE                                                  0x0003
#define CMD_HARDWARE_RESET                                                0x0004
#define CMD_START_FLASH                                                   0x0005
#define CMD_NACK                                                          0x00fe
#define CMD_ACK                                                           0x00ff

// For general mucking around
#define CMD_DEBUG_PRINT_STRING                                            0x0100
#define CMD_DEBUG_PRINT_INTEGERS                                          0x0101
#define CMD_DEBUG_PRINT_BYTES                                             0x0102
#define CMD_LCD_RESET                                                     0x0103
#define CMD_LCD                                                           0x0104
#define CMD_BUFF_CLEAR                                                    0x0105
#define CMD_READ_MEM                                                      0x0106
#define CMD_VERSION                                                       0x0107
#define CMD_STATUS                                                        0x0108
#define CMD_PING                                                          0x0109


// controlling the ADC input multiplexer
#define CMD_SET_ADC_MUX                                                   0x020F

// RDV40,  Smart card operations
#define CMD_SMART_RAW                                                     0x0140
#define CMD_SMART_UPGRADE                                                 0x0141
#define CMD_SMART_UPLOAD                                                  0x0142
#define CMD_SMART_ATR                                                     0x0143
// CMD_SMART_SETBAUD is unused for now
#define CMD_SMART_SETBAUD                                                 0x0144
#define CMD_SMART_SETCLOCK                                                0x0145

// For low-frequency tags
#define CMD_READ_TI_TYPE                                                  0x0202
#define CMD_WRITE_TI_TYPE                                                 0x0203
#define CMD_DOWNLOADED_RAW_BITS_TI_TYPE                                   0x0204
#define CMD_ACQUIRE_RAW_ADC_SAMPLES_125K                                  0x0205
#define CMD_MOD_THEN_ACQUIRE_RAW_ADC_SAMPLES_125K                         0x0206
#define CMD_DOWNLOAD_RAW_ADC_SAMPLES_125K                                 0x0207
#define CMD_DOWNLOADED_RAW_ADC_SAMPLES_125K                               0x0208
#define CMD_DOWNLOADED_SIM_SAMPLES_125K                                   0x0209
#define CMD_SIMULATE_TAG_125K                                             0x020A
#define CMD_HID_DEMOD_FSK                                                 0x020B
#define CMD_HID_SIM_TAG                                                   0x020C
#define CMD_SET_LF_DIVISOR                                                0x020D
#define CMD_LF_SIMULATE_BIDIR                                             0x020E
#define CMD_HID_CLONE_TAG                                                 0x0210
#define CMD_EM410X_WRITE_TAG                                              0x0211
#define CMD_INDALA_CLONE_TAG                                              0x0212
// for 224 bits UID
#define CMD_INDALA_CLONE_TAG_L                                            0x0213
#define CMD_T55XX_READ_BLOCK                                              0x0214
#define CMD_T55XX_WRITE_BLOCK                                             0x0215
#define CMD_T55XX_RESET_READ                                              0x0216
#define CMD_PCF7931_READ                                                  0x0217
#define CMD_PCF7931_WRITE                                                 0x0222
#define CMD_PCF7931_BRUTEFORCE                                            0x0227
#define CMD_EM4X_READ_WORD                                                0x0218
#define CMD_EM4X_WRITE_WORD                                               0x0219
#define CMD_IO_DEMOD_FSK                                                  0x021A
#define CMD_IO_CLONE_TAG                                                  0x021B
#define CMD_EM410X_DEMOD                                                  0x021c
// Sampling configuration for LF reader/snooper
#define CMD_SET_LF_SAMPLING_CONFIG                                        0x021d
#define CMD_FSK_SIM_TAG                                                   0x021E
#define CMD_ASK_SIM_TAG                                                   0x021F
#define CMD_PSK_SIM_TAG                                                   0x0220
#define CMD_AWID_DEMOD_FSK                                                0x0221
#define CMD_VIKING_CLONE_TAG                                              0x0223
#define CMD_T55XX_WAKEUP                                                  0x0224
#define CMD_COTAG                                                         0x0225
#define CMD_PARADOX_CLONE_TAG                                             0x0226
#define CMD_EM4X_PROTECT                                                  0x0228

// For the 13.56 MHz tags
#define CMD_ACQUIRE_RAW_ADC_SAMPLES_ISO_15693                             0x0300
#define CMD_READ_SRI512_TAG                                               0x0303
#define CMD_READ_SRIX4K_TAG                                               0x0304
#define CMD_ISO_14443B_COMMAND                                            0x0305
#define CMD_READER_ISO_15693                                              0x0310
#define CMD_SIMTAG_ISO_15693                                              0x0311
#define CMD_SNOOP_ISO_15693                                               0x0312
#define CMD_ISO_15693_COMMAND                                             0x0313
#define CMD_ISO_15693_COMMAND_DONE                                        0x0314
#define CMD_ISO_15693_FIND_AFI                                            0x0315
#define CMD_ISO_15693_DEBUG                                               0x0316
#define CMD_LF_SNOOP_RAW_ADC_SAMPLES                                      0x0317
#define CMD_CSETUID_ISO_15693                                             0x0318
#define CMD_ISO_15693_SLIX_L_DISABLE_PRIVACY                              0x0319

// For Hitag2 transponders
#define CMD_SNOOP_HITAG                                                   0x0370
#define CMD_SIMULATE_HITAG                                                0x0371
#define CMD_READER_HITAG                                                  0x0372
#define CMD_SIMULATE_HITAG_S                                              0x0368
#define CMD_TEST_HITAGS_TRACES                                            0x0367
#define CMD_READ_HITAG_S                                                  0x0373
#define CMD_READ_HITAG_S_BLK                                              0x0374
#define CMD_WR_HITAG_S                                                    0x0375
#define CMD_EMU_HITAG_S                                                   0x0376

#define CMD_SIMULATE_TAG_ISO_14443B                                       0x0381
#define CMD_SNOOP_ISO_14443B                                              0x0382
#define CMD_SNOOP_ISO_14443a                                              0x0383
#define CMD_SIMULATE_TAG_ISO_14443a                                       0x0384
#define CMD_READER_ISO_14443a                                             0x0385
#define CMD_SIMULATE_TAG_LEGIC_RF                                         0x0387
#define CMD_READER_LEGIC_RF                                               0x0388
#define CMD_WRITER_LEGIC_RF                                               0x0389
#define CMD_EPA_PACE_COLLECT_NONCE                                        0x038A
#define CMD_EPA_PACE_REPLAY                                               0x038B

#define CMD_ICLASS_CLONE                                                  0x0390
#define CMD_ICLASS_DUMP                                                   0x0391
#define CMD_SNOOP_ICLASS                                                  0x0392
#define CMD_SIMULATE_TAG_ICLASS                                           0x0393
#define CMD_READER_ICLASS                                                 0x0394
#define CMD_ICLASS_READBLOCK                                              0x0396
#define CMD_ICLASS_WRITEBLOCK                                             0x0397
#define CMD_ICLASS_EML_MEMSET                                             0x0398
#define CMD_ICLASS_CHECK                                                  0x0399
#define CMD_ICLASS_READCHECK                                              0x039A

// For measurements of the antenna tuning
#define CMD_MEASURE_ANTENNA_TUNING                                        0x0400
#define CMD_MEASURE_ANTENNA_TUNING_HF                                     0x0401
#define CMD_MEASURED_ANTENNA_TUNING                                       0x0410
#define CMD_LISTEN_READER_FIELD                                           0x0420

// For direct FPGA control
#define CMD_FPGA_MAJOR_MODE_OFF                                           0x0500

// For mifare commands
#define CMD_MIFARE_SET_DBGMODE                                            0x0600
#define CMD_MIFARE_EML_MEMCLR                                             0x0601
#define CMD_MIFARE_EML_MEMSET                                             0x0602
#define CMD_MIFARE_EML_MEMGET                                             0x0603
#define CMD_MIFARE_EML_CARDLOAD                                           0x0604

// magic chinese card commands
#define CMD_MIFARE_CSETBLOCK                                              0x0605
#define CMD_MIFARE_CGETBLOCK                                              0x0606
#define CMD_MIFARE_CIDENT                                                 0x0607
#define CMD_MIFARE_CWIPE                                                  0x0608

#define CMD_SIMULATE_MIFARE_CARD                                          0x0610

#define CMD_READER_MIFARE                                                 0x0611
#define CMD_MIFARE_NESTED                                                 0x0612
#define CMD_MIFARE_ACQUIRE_ENCRYPTED_NONCES                               0x0613

#define CMD_MIFARE_READBL                                                 0x0620
#define CMD_MIFARE_READSC                                                 0x0621
#define CMD_MIFARE_WRITEBL                                                0x0622
#define CMD_MIFARE_CHKKEYS                                                0x0623
#define CMD_MIFARE_PERSONALIZE_UID                                        0x0624
#define CMD_MIFARE_SNIFFER                                                0x0630

//ultralightC
#define CMD_MIFAREU_READBL                                                0x0720
#define CMD_MIFAREU_READCARD                                              0x0721
#define CMD_MIFAREU_WRITEBL                                               0x0722
#define CMD_MIFAREU_WRITEBL_COMPAT                                        0x0723
#define CMD_MIFAREUC_AUTH                                                 0x0724
//0x0725 and 0x0726 no longer used
#define CMD_MIFAREUC_SETPWD                                               0x0727


// mifare desfire
#define CMD_MIFARE_DESFIRE_READBL                                         0x0728
#define CMD_MIFARE_DESFIRE_WRITEBL                                        0x0729
#define CMD_MIFARE_DESFIRE_AUTH1                                          0x072a
#define CMD_MIFARE_DESFIRE_AUTH2                                          0x072b
#define CMD_MIFARE_DES_READER                                             0x072c
#define CMD_MIFARE_DESFIRE_INFO                                           0x072d
#define CMD_MIFARE_DESFIRE                                                0x072e

#define CMD_HF_SNIFFER                                                    0x0800
#define CMD_HF_PLOT                                                       0x0801

#define CMD_VARIABLE_SIZE_FLAG                                            0x8000
#define CMD_UNKNOWN                                                       0xFFFF


#define USB_CMD_DATA_SIZE 512

typedef struct {
  uint64_t cmd;
  uint64_t arg[3];
  union {
    uint8_t  asBytes[USB_CMD_DATA_SIZE];
    uint32_t asDwords[USB_CMD_DATA_SIZE/4];
  } d;
} UsbCommand;


typedef struct {
  uint16_t cmd;
  uint16_t datalen;
  uint32_t arg[3];
  union {
    uint8_t  asBytes[USB_CMD_DATA_SIZE];
    uint32_t asDwords[USB_CMD_DATA_SIZE/4];
  } d;
} UsbResponse;

void pm3_parse(uint8_t *buf)
{
  UsbResponse *res = (UsbResponse*)buf;
  
  bool varLen = (res->cmd & 0x8000) != 0;
  uint32_t cmd = res->cmd & 0x7FFF;
  
  switch(cmd)
  {
    case CMD_ACK:
      res->d.asBytes[res->datalen] = 0;
      Serial.printf("[PM3] Debug: '%s'\n", res->d.asBytes);
      break;
      
    case CMD_DEBUG_PRINT_STRING:
      res->d.asBytes[res->datalen] = 0;
      Serial.printf("[PM3] Debug: '%s'\n", res->d.asBytes);
      break;
      
    case CMD_DOWNLOADED_RAW_ADC_SAMPLES_125K:
      break;
      
    default:
      Serial.printf("[PM3] Response CMD 0x%04X\n", res->cmd);
      Serial.printf("[PM3] Response LEN 0x%04X\n", res->datalen);
      Serial.printf("[PM3] Response arg 0x%08X 0x%08X 0x%08X\n", res->arg[0], res->arg[1], res->arg[2]);
      break;
  }
}

void pm3_check_version()
{
  UsbCommand cmd;

  cmd.cmd = CMD_VERSION;
  cmd.arg[0] = 0;
  cmd.arg[1] = 0;
  cmd.arg[2] = 0;
  
  spi_send((uint8_t*)&cmd, sizeof(cmd));
}

void pm3_check_status()
{
  UsbCommand cmd;

  cmd.cmd = CMD_STATUS;
  cmd.arg[0] = 0;
  cmd.arg[1] = 0;
  cmd.arg[2] = 0;
  
  spi_send((uint8_t*)&cmd, sizeof(cmd));
}


