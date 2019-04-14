// 가변저항으로 음정(pitch)조절
int piezoPin = 7;

void setup() {
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // val : 가변저항의 alalog 값
  int val = analogRead(A0); 
  
  Serial.print("가변저항 값: ");
  Serial.println(val);

  // 아날로그 출력을 음(주파수)으로 변환
  int pitch = map(val, 0, 1023, 0, 3000);
  tone(piezoPin, pitch, 50);

  Serial.print("pitch: ");
  Serial.println(pitch);
  
  delay(300);
}
