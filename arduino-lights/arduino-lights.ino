/*
 * Author: Serena He
 * Testing out LED light show ideas on Arduino
 */

int LED1 = 1;
int LED2 = 2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  digitalWrite(LED1, HIGH); // turn on LED1
  delay(100);               // 100 ms wait
  digitalWrite(LED2, HIGH); // turn on LED2
  delay(100);               // 100 ms wait
  digitalWrite(LED1, LOW);  // turn off LED1
  delay(100);               // 100 ms wait
  digitalWrite(LED2, LOW);  // turn off LED2
  delay(100);               // 100 ms wait
}
