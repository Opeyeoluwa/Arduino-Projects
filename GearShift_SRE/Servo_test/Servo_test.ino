// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
int gear = 0;
const int gearbuttonU = 52; //Upshift button connected to pin 52
const int gearbuttonD = 53; //Downshift button connected to pin 53

 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  pinMode(gearbuttonU, INPUT);		//assign gear shift up button as an input
  pinMode(gearbuttonD, INPUT);		//assign gear shift down button as an input
  myservo.write(90);                    //initalize the shift-arm to middle position
} 
 
void loop() 
{ 
  if (gearbuttonU == HIGH) 
 {
      myservo.write(180);               // sets the servo position out from the neutral position
      delay(1000);                       // waits for the servo to get there
      myservo.write(90);       // return back to middle position
      delay(1000);  
   }
  if (gearbuttonD == HIGH) 
  {
      myservo.write(0);               // sets the servo position to the neutral position
      delay(1000);                       // waits for the servo to get there
      myservo.write(90);               // return back to middle position
      delay(1000);                 // downshift gear by 1
    }
}
