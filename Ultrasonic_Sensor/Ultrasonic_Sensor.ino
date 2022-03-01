int trig = 4;
int echo = 5;
int buzzer = 7;
int led = 10;
float distance;
int duration;


void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trig, HIGH); // sending out the signal
  delayMicroseconds(1000);
  digitalWrite(trig, LOW); // stopping the signal
  duration = pulseIn(echo, HIGH); //reading the value of echo
  distance = 0.017 * duration;

  if( distance < 15){
    digitalWrite(buzzer, HIGH);
    //Serial.println(duration);
    Serial.println(distance);// to display the distance covered
    digitalWrite(led, HIGH);
   }

   else {
    digitalWrite(buzzer, LOW);
    Serial.println(distance);
    digitalWrite(led, LOW);
   }
  // put your main code here, to run repeatedly:

}
