// 가변저항으로 음정(pitch)조절
int piezoPin = 7;

void setup() {
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(A0);
  Serial.println(val);

  // 아날로그 출력을 음정으로 변환
  int pitch = map(val, 0, 1023, 0, 3000);
  tone(piezoPin, pitch, 50);
  delay(300);
}
