int analog = A1;
int digital  = 2;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Sajjad Pishvaeian-9531015");
  pinMode(digital, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(analog);
  value = ((float)value/ 1023.0 )* 100.0 ;
  Serial.print("Voltage: ");
  Serial.println(value);
  if (value >= 50) {
    digitalWrite(digital, HIGH);
    Serial.println("LED State: On");
//    delay(500);
  }
  else {
    digitalWrite(digital, LOW);
    Serial.println("LED State: Off");
//    delay(500);
  }
  delay(1500);
}
