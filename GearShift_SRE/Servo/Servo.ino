
// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
int gear = 0;
const int gearbuttonU = 52; //Upshift button connected to pin 5
const int gearbuttonD = 53; //Downshift button connected to pin 6
const int usec = 500;

int buttonstate1 = LOW;
int buttonstate2 = LOW;
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600);
  pinMode(gearbuttonU, INPUT_PULLUP);		//assign gear shift up button as an input
  pinMode(gearbuttonD, INPUT_PULLUP);		//assign gear shift down button as an input
  myservo.write(90);                    //initalize the shift-arm to middle position
} 
 
void loop() 
{ 
  buttonstate1 = digitalRead(gearbuttonU);
  buttonstate2 = digitalRead(gearbuttonD);
  if (buttonstate1 == HIGH & buttonstate2 == LOW) 
  { Serial.println("Up gear engaged");
    if (gear == 0) 
    {
      myservo.write(45);               // sets the servo position out from the neutral position
      delay(usec);                       // waits for the servo to get there
      myservo.write(90);               // return back to middle position
      delay(usec);
      gear = gear + 1;                 // now gear is in 1st gear
          }
    else if (gear <= 5)
    {
  myservo.write(180);                  // sets the servo position to upshift 
  delay(usec);                           // waits for the servo to get there 
  myservo.write(90);                   // return back to middle position
  delay(usec);
  gear = gear + 1;                     // upshift gear by 1
   }
  }
  
  if (buttonstate1 == LOW & buttonstate2 == HIGH) 
  { Serial.println("Down gear works");
    if (gear == 1)
    {
      myservo.write(45);               // sets the servo position to the neutral position
      delay(usec);                       // waits for the servo to get there
      myservo.write(90);               // return back to middle position
      delay(usec);
      gear = gear - 1;                 // downshift gear by 1
    }
    else if (gear >= 2 & gear <=7)
    {
      if (gear == 7)
      {
        gear = 6;
      }
    myservo.write(0);                  // sets the servo position to downshift
    delay(usec);                         // waits for the servo to get there 
    myservo.write(90);                 // return back to middle position
    delay(usec);
    gear = gear - 1;                   // downshift gear by 1
    }
  } 
  myservo.write(90);
  delay(usec);
}
