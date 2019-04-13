#include "pitches.h" // pitches.h 탭의 코드를 포함

//학교종이 땡땡땡의 음을 나타내는 배열
int melody[] = {
    NOTE_G4, NOTE_G4, NOTE_A5, NOTE_A5,
    NOTE_G4, NOTE_G4, NOTE_E4, 
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4,
    0,
    NOTE_G4, NOTE_G4, NOTE_A5, NOTE_A5,
    NOTE_G4, NOTE_G4, NOTE_E4,
    NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4,
    0
};

//음 길이를 나타내는 배열
int noteDurations[] = {
    1,1,1,1,
    1,1,2,
    1,1,1,1,3,
    1,
    1,1,1,1,
    1,1,2,
    1,1,1,1,3,
    1
};

void setup() {
    for (int thisNote = 0; thisNote < 26; thisNote++) {
        // 음의길이(박자) 계산(4/1, 4/2, 4/3)
        int noteDuration = 250 * noteDurations[thisNote];
        tone(8, melody[thisNote],noteDuration);
        
        // 피에조 스피커에서 소리가나는 것을 유지하기 위해 delay 시간
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        
        // 피에조 스피커의 소리를 끕니다. 
        noTone(8);
    }
}

void loop() {

} 
