
#include <ArduinoOTA.h>

bool ota_active = false;

void ota_setup()
{
  ArduinoOTA.setHostname("ProxmarkWifi");

  ArduinoOTA.onStart([]() {
      ota_active = true;
    });
  ArduinoOTA.onEnd([]() {
      ota_active = false;
    });
  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    });
  ArduinoOTA.onError([](ota_error_t error) {
      Serial.printf("Error[%u]: ", error);
      if (error == OTA_AUTH_ERROR) Serial.println("Auth Failed");
      else if (error == OTA_BEGIN_ERROR) Serial.println("Begin Failed");
      else if (error == OTA_CONNECT_ERROR) Serial.println("Connect Failed");
      else if (error == OTA_RECEIVE_ERROR) Serial.println("Receive Failed");
      else if (error == OTA_END_ERROR) Serial.println("End Failed");
    });

  ArduinoOTA.begin();
}

bool ota_loop()
{
  return false;
}

