int relay_pin = 3;

void setup() {
  pinMode(relay_pin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(relay_pin, HIGH);
  Serial.println("Relay is on");
  delay(3000);
  digitalWrite(relay_pin, LOW);
  Serial.println("Relay is off");
  delay(3000);
  // put your main code here, to run repeatedly:
}

//The parts of the relay.
//NO- Normally open does not allow voltage until it is closed
//NC- Normally closed allows volatage when open.
//COM- common links between the two
// the NO and NC act in opposite to one another
