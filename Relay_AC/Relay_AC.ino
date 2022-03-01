int button = 7;
int relay = 4;


void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
if(digitalRead(button) == LOW){
    digitalWrite(relay, HIGH);
     Serial.println("Bulb is OFF");
}
  
else{
      digitalWrite(relay, LOW);
      Serial.println("Bulb is ON");
}
     
  
  // put your main code here, to run repeatedly:

}
