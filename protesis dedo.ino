#include <Servo.h>
Servo servo1;
int pinservo1 = 2;

void extension() {
  servo1.write(0);
}
void indice(char op) { //con 1 abre y con 2 cierra
  switch (op) {
    case 1:
      servo1.write(0);
      break;
    case 2:
      servo1.write(180);
      break;
  }
}
void flexion() {
  indice(2);
}
void setup() {
  servo1.attach(pinservo1, 610, 2550);
  pinMode(pinservo1, OUTPUT);
  Serial.begin(9600);
  extension();
}
void loop() {
  flexion();
  delay(2000);
  extension();
delay(2000);
}