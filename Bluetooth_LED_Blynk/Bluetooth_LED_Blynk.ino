#define BLYNK_PRINT Serial

#include <SoftwareSerial.h>
SoftwareSerial SwSerial(10, 11); // RX, TX

#include <BlynkSimpleSerialBLE.h>
SoftwareSerial SerialBLE(10, 11); // RX, TX

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
//char auth[] = "RsZ0M5pmPK1GkRFPIFVRRsZZ4W-Jd_L8"; //NANO
char auth[] = "qV5X-JQIPEK0mLLwjOFEMsaeV198X7n4";  //UNO

WidgetLED led1(V1);  //LED indicator for device on or off
//V1 LED Widget is blinking
void blinkLedWidget()
{
  if (led1.getValue()) {
    led1.off();
    Serial.println("LED on V1: off");
  } else {
    led1.on();
    Serial.println("LED on V1: on");
  }
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE, auth);

  Serial.println("Waiting for connections...");

}

void loop()
{
  Blynk.run();
}
