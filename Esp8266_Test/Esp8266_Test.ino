#include <ESP8266WiFi.h>
char ssid[]= "AndroidAP";
char auth[] = "pZCnpA42Eg6WxJcSv3bkWwxwEwUpWBNj";
char pass[] = "qwertyui";

void setup()
{
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(ssid, pass);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}
