int digitalPin = 2;

void setup() {

  Serial.begin(9600);
  pinMode(digitalPin, OUTPUT);
}

void loop() {
  digitalWrite(digitalPin, LOW);
  Serial.println("LED State: Off");
  delay(1000);
  digitalWrite(digitalPin, HIGH);
  Serial.println("LED State: On");
  delay(1000);
}
