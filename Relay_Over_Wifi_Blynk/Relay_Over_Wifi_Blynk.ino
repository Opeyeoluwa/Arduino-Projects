#define BLYNK_PRINT Serial        
#include <ESP8266WiFi.h>        
#include <BlynkSimpleEsp8266.h>        
char auth[] = "authtocken"; // PASTE YOUR AUTHENTICATION CODE HERE        
// Your WiFi credentials.        
char ssid[] = "Rain Nigeria Airtel"; //WIFI NAME        
char pass[] = "Rainigeria."; //PASSWORD   
     
void setup()        
{        
 Serial.begin(9600);        
 Blynk.begin(auth, ssid, pass);        
} 
       
void loop()        
{        
 Blynk.run();        
}       







#define BLYNK_PRINT Serial  
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>  
  
char auth[] = "f839fcfeaf4a47cfb5d0f20771e8xxxx"; // the auth code that you got on your gmail and Blynk app  
char ssid[] = "NETGEAR64"; // username or ssid of your WI-FI  
char pass[] = "password"; // password of your Wi-Fi  
  
void setup()  
{  
// Debug console  
Serial.begin(9600);  
pinMode(D1,OUTPUT); //extend these to D8 if you are using a 8 pin relay  
pinMode(D2,OUTPUT);  
pinMode(D3,OUTPUT);  
pinMode(D4,OUTPUT);  
   
digitalWrite(D1,HIGH); // Make it low if you want everything to go off  
digitalWrite(D2,HIGH); // in case of a power cut  
digitalWrite(D3,HIGH);  
digitalWrite(D4,HIGH);  
Blynk.begin(auth, ssid, pass);  
}  
  
void loop()  
{  
Blynk.run();  
}  
