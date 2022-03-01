/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************

  You can use this sketch as a debug tool that prints all incoming values
  sent by a widget connected to a Virtual Pin 1 in the Blynk App.

  App project setup:
    Slider widget (0...100) on V1
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

int relay = 2; // pin D4 on NodeMCU
int green = 13; //D7
int yellow = 12; //D6
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "pZCnpA42Eg6WxJcSv3bkWwxwEwUpWBNj";
char ssid[] = "GEORGE";
char pass[] = "robotfreek19";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
BLYNK_WRITE(V1)
{

  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable

  if (pinValue==1){
    digitalWrite(relay, HIGH);
    digitalWrite(green, HIGH);
    
    }


  else {
    
    digitalWrite(relay, LOW);
    digitalWrite(green, HIGH);
    
    }
  // You can also use:
  // String i = param.asStr();
  // double d = param.asDouble();
  
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  pinMode(relay, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
