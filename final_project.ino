
#include <ardumidi.h>

int fsrPin = 0;
int note_on = 7;
int fsrReading;
int velocity = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(fsrPin, OUTPUT);
}

void loop()
  { fsrReading = analogRead(fsrPin);   

  if (fsrReading < 100) {
 midi_note_on(144, MIDI_C, 80);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);
  }  else if (fsrReading < 300) {
 midi_note_on(144, MIDI_A, 90);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);
     } else if (fsrReading < 350) {
    midi_note_off(128, 0, 0);

    note_on = 0;
        } else if (fsrReading < 1) {
    midi_note_off(128, 0, 0);

    note_on = 0;
     }  else if (fsrReading < 400) {
 midi_note_on(144, MIDI_B, 55);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);

 }  else if (fsrReading < 500) {
 midi_note_on(144, MIDI_D, 50);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);
 }  else if (fsrReading < 600) {
 midi_note_on(144, MIDI_E, 60);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);
 }  else if (fsrReading < 700) {
 midi_note_on(144, MIDI_G, 75);
    note_on = 1;
    digitalWrite(fsrPin, HIGH);

  } else if (fsrReading < 900) {
    midi_note_off(128, 0, 0);

    note_on = 0;
    digitalWrite(fsrPin, LOW);
  }
  delay(500);
} 
//
