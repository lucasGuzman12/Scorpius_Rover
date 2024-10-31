#include <Servo.h> // Incluye la biblioteca Servo.h

Servo miServo; // Crea un objeto Servo

void setup() {
  miServo.attach(3); // Asigna el pin 9 para controlar el servo
}

void loop() {
  miServo.write(90); // Mueve el servo a 90 grados (posición central)
}
