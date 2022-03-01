void setup() {
  pinMode(5, OUTPUT); //red
  pinMode(6, OUTPUT); //amber
  pinMode(7, OUTPUT); //green
  //Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(5, HIGH);//Turn on red
  delay(8000);
  digitalWrite(6, HIGH);//amber comes on
  delay(4000);
  digitalWrite(5, LOW);//red goes off
  digitalWrite(6, LOW);//amber goes off
  digitalWrite(7, HIGH);//green comes on
  delay(10000);
  digitalWrite(7, LOW);//green goes off
  
  // put your main code here, to run repeatedly:

}
