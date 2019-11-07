#include <Arduino.h>
#include <ST7032_asukiaaa.h>

#define DETECT_TIMEOUT 100000 // micro seconds?

#define ECHO_PIN 6
#define TRIG_PIN 7

ST7032_asukiaaa lcd;

float getDistance(int trig_pin, int echo_pin) {
  float duration = 0;
  float distance = 0;
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  duration = pulseIn(echo_pin, HIGH, DETECT_TIMEOUT);
  duration = duration / 2; // get half distance
  distance = duration * 340 * 100 / 1000000; // carc with sound speed as 340m/s
  return distance;
}

void setup() {
  lcd.begin(8, 2);
  lcd.setContrast(30);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  float d = getDistance(TRIG_PIN, ECHO_PIN);
  lcd.setCursor(0, 0);
  String s = String((int) d);
  while (s.length() < 8) {
    s = " " + s;
  }
  lcd.print(s);
  delay(100);
}
