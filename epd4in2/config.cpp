#include <ESP8266WiFi.h>

void startConfigSsid() {
  WiFi.softAP("magic_calender", "magic_calender_123", 1, true, 1);
}
