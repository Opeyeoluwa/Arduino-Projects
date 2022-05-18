// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
int value1 = LOW;
int value2 = LOW;
Servo myservo;  // create servo object to control a servo 
const int gearbuttonU = 52; //Upshift button connected to pin 52
const int gearbuttonD = 53; //Downshift button connected to pin 53

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  Serial.begin(9600);
  pinMode(gearbuttonU, INPUT_PULLUP);		//assign gear shift up button as an input
  pinMode(gearbuttonD, INPUT_PULLUP);		//assign gear shift down button as an input
  myservo.write(45);                    //initalize the shift-arm to middle position
} 
 
void loop() 
{ 
  value1 = digitalRead(gearbuttonU);
  value2 = digitalRead(gearbuttonD);
  if (value1 == HIGH & value2 == LOW) {
      Serial.println("Up gear works");
      myservo.write(45); 
      delay(1000); 
      myservo.write(0);               // sets the servo position out from the neutral position
      delay(1000);                       // waits for the servo to get there
      myservo.write(45);       // return back to middle position
   }

  if (value2 == HIGH & value1 == LOW) {
      Serial.println("Down gear works");
      myservo.write(45);               // sets the servo position to the neutral position
      delay(1000);                       // waits for the servo to get there
      myservo.write(90);  
      delay(1000);          // return back to middle position               // downshift gear by 1
      myservo.write(45);               // sets the servo position to the neutral position
      
    }
}
