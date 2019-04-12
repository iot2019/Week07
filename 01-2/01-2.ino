// C 262 : 도 
// D 294 : 레 
// E 330 : 미 
// F 349 : 파 
// G 392 : 솔 
// A 440 : 라 
// B 494 : 시 

#include "pitches.h"

int piezoPin = 8; // 피에조의 ⊕극을 보드 8번에 연결 
int tempo = 200; // duration 옵션 값 설정 
int notes[25] = { NOTE_G1, NOTE_G1, NOTE_A1, NOTE_A1, NOTE_G1, NOTE_G1, 
                  NOTE_E1, NOTE_G1, NOTE_G1, NOTE_E1, NOTE_E1, NOTE_D1, 
                  NOTE_G1, NOTE_G1, NOTE_A1, NOTE_A1, NOTE_G1, NOTE_G1, 
                  NOTE_E1, NOTE_G1, NOTE_E1, NOTE_D1, NOTE_E1, NOTE_C1 }; 

void setup() {
  pinMode (piezoPin, OUTPUT); 
}

void loop() {
   for (int i = 0; i < 12; i++) { 
     tone (piezoPin, notes[i], tempo); 
     delay (300); 
  } 
  delay(100); // 멜로디 중간에 짧게 멈추는 용도 

  for (int i = 12; i < 25; i++) { 
     tone (piezoPin, notes[i], tempo); 
     delay(300); 
  } 
}
