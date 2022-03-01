#define led D4

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(led, HIGH);
  delay(2000);
  Serial.println("Bulb is On");
  digitalWrite(led, LOW);
  delay(2000);
  Serial.println("Bulb is Off");
  // put your main code here, to run repeatedly:

}
