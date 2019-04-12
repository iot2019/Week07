// PULL DOWN 푸시버튼 3개로 피아노 만들기 
#include "pitches.h"
int piezoPin = 7;
// Switch Pin 3개
int bts[] = {8, 9, 10};
// 주파수 3개(도, 레, 미)
int notes[] = {NOTE_C5, NOTE_D5, NOTE_F5};

void setup() {
  // for 문에 따라 푸시 버튼 pin 3개 설정 
  for(int i=0; i<3; i++) {
    pinMode(bts, INPUT);
  }
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<3; i++) {
    if(digitalRead(bts[i]) == HIGH) {
      tone(piezoPin, notes[i], 100); // 0.1초동안 출력
      delay(100);
      noTone(piezoPin); // 피에조 출력 멈춤
    }
  }
}
