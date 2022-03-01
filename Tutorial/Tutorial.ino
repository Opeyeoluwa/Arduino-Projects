/*
 * Blink LED
 */


void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600) // rate at which code os uploaded
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(7, HIGH); //HIGH is to Turn on LED
  Serial.println("LED is on");
  delay(500); //Delay controls time frsme in milliseconds
  digitalWrite(7, LOW); // LOW is to turn LED off
  Serial.println("LED is off");
  delay(500); 
  // put your main code here, to run repeatedly:

}
