// PULL DOWN 푸시버튼, pitches.h를 사용하여 한개의 음(DO) 읽기 
#include "pitches.h"
int notes = NOTE_C5; // DO
int piezoPin = 7;
int swPin = 8;

void setup() {
  // 푸시 버튼 pin 설정 
  pinMode(swPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // 푸시 버튼의 값 읽기
  int swValue = digitalRead(swPin);
  
  // 시리얼 모니터로 출력 확인
  Serial.print("   Push Button 값 : ");
  Serial.println(swValue);
  // 스위치의 값이 HIGH(1)이면 음 출력
  // PULL DOWN 저항이므로 버튼을 누르면 값이 HIGH(1)로 변경됨
  if(swValue == HIGH) {
     tone(piezoPin, notes, 50);
     // 음 하나를 출력하고 0.7초 delay
     delay(700);
  }
}
