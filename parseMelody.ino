String melody[] = {"16A1", "32B7", "16B6", "A7", "8B7"};

String noteDuration[] = {"8", "16", "32"};
int indexLoop = 0;
int currentDuration = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("### loop[" + String(indexLoop) + "] ###");
  Serial.println();
  for (int thisNote = 0; thisNote < 5; thisNote++) {
    Serial.println("# thisNote[" + String(thisNote) + "] = " + melody[thisNote] + " #");
    currentDuration = -1;
    for (int thisDuration = 0; thisDuration < 3; thisDuration++) {
      Serial.println("thisDuration[" + String(thisDuration) + "] = " + noteDuration[thisDuration] + " => " + melody[thisNote].startsWith(noteDuration[thisDuration]));
      if (melody[thisNote].startsWith(noteDuration[thisDuration]) == 1) {
        currentDuration = thisDuration;
      };
      delay(500);
    }
    delay(1000);
    Serial.println(melody[thisNote] + ": " + noteDuration[currentDuration]);
    Serial.println();
  }
  indexLoop++;
  delay(2000);
  Serial.println();
}
