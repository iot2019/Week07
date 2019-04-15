// 조도센서의 값을 읽어서 피에조 음정(pitch)으로 출력하기
int piezoPin = 7;

void setup() {
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);
  Serial.print("light: ");
  Serial.println(light);

  // 아날로그 출력을 음정으로 변환
  int pitch = map(light, 0, 1023, 0, 3000);
  Serial.print("pitch: ");
  Serial.println(pitch);
  
  tone(piezoPin, pitch, 50); // 50은 0.5초 duration
  delay(300);
}
