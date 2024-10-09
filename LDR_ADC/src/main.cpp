#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LDR_PIN, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("> Value: ");
  Serial.println(analogRead(LDR_PIN));
}