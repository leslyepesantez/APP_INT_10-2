int bombaAgua = 2;

void setup() {
  pinMode (bombaAgua, OUTPUT);
}

void loop() {
  digitalWrite(bombaAgua, LOW);
  delay(8000);

  digitalWrite(bombaAgua, HIGH);
  delay(3000);

}
