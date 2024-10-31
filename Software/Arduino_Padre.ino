#include <Servo.h>

//VARIABLES DE CAMINATA-------
bool CAMINAR_ADELANTE = false;
bool CAMINAR_ATRAS = false;
bool CAMINAR_DERECHA = false;
bool CAMINAR_IZQUIERDA = false;

bool WELLERMAN_MOMENT = false;
//----------------------------


int VELOCIDAD_PATAS = 20;

//Las patas estan enumeradas en sentido horario

//Posiciones de servos de las patas
int pos_rot_1 = 90;
int pos_up_1 = 90;
int pos_rot_2 = 90;
int pos_up_2 = 90;
int pos_rot_3 = 90;
int pos_up_3 = 90;
int pos_rot_4 = 90;
int pos_up_4 = 90;
int pos_rot_5 = 90;
int pos_up_5 = 90;
int pos_rot_6 = 90;
int pos_up_6 = 90;

//PATA 1
Servo rot_1;
Servo up_1;
//PATA 2
Servo rot_2;
Servo up_2;
//PATA 3
Servo rot_3;
Servo up_3;
//PATA 4
Servo rot_4;
Servo up_4;
//PATA 5
Servo rot_5;
Servo up_5;
//PATA 6
Servo rot_6;
Servo up_6;

void DEF_POS() {
  
  rot_1.write(90);
  up_1.write(90);
  rot_2.write(90);
  up_2.write(90);
  rot_3.write(90);
  up_3.write(90);
  rot_4.write(90);
  up_4.write(90);
  rot_5.write(90);
  up_5.write(90);
  rot_6.write(90);
  up_6.write(90);

  pos_rot_1 = 90;
  pos_up_1 = 90;
  pos_rot_2 = 90;
  pos_up_2 = 90;
  pos_rot_3 = 90;
  pos_up_3 = 90;
  pos_rot_4 = 90;
  pos_up_4 = 90;
  pos_rot_5 = 90;
  pos_up_5 = 90;
  pos_rot_6 = 90;
  pos_up_6 = 90;
  
  delay(1000);
}

void setup()
{
  rot_1.attach(2, 500, 2500);
  up_1.attach(3, 500, 2500);
  rot_2.attach(4, 500, 2500);
  up_2.attach(5, 500, 2500);
  rot_3.attach(6, 500, 2500);
  up_3.attach(7, 500, 2500);
  rot_4.attach(8, 500, 2500);
  up_4.attach(9, 500, 2500);
  rot_5.attach(10, 500, 2500);
  up_5.attach(11, 500, 2500);
  rot_6.attach(12, 500, 2500);
  up_6.attach(13, 500, 2500);
  
  DEF_POS();
  
  Serial.begin(9600);
}

void CAMINAR() {
  //Levanta grupo 1
  for (int i = pos_up_1; i < 140; i += 1) { //pos_up_1 es la pata directora
    pos_up_1 ++;
    pos_up_3 ++;
    pos_up_5 --;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i > 70; i -= 1) {
    pos_rot_1 --;
    pos_rot_3 --;
    pos_rot_5 ++;

    pos_rot_2 ++;
    pos_rot_4 --;
    pos_rot_6 --;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 1
  for (int i = pos_up_1; i > 90; i -= 1) {
    pos_up_1 --;
    pos_up_3 --;
    pos_up_5 ++;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Levanta grupo 2
  for (int i = pos_up_2; i < 140; i += 1) { // pos_up_2 es la pata directora
    pos_up_2 ++;
    pos_up_4 --;
    pos_up_6 --;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i < 110; i += 1) {
    pos_rot_1 ++;
    pos_rot_3 ++;
    pos_rot_5 --;

    pos_rot_2 --;
    pos_rot_4 ++;
    pos_rot_6 ++;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 2
  for (int i = pos_up_2; i > 90; i -= 1) { // pos_up_2 es la pata directora
    pos_up_2 --;
    pos_up_4 ++;
    pos_up_6 ++;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
}
void RETROCEDER() {
  //Levanta grupo 1
  for (int i = pos_up_1; i < 140; i += 1) { //pos_up_1 es la pata directora
    pos_up_1 ++;
    pos_up_3 ++;
    pos_up_5 --;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i < 110; i += 1) {
    pos_rot_1 ++;
    pos_rot_3 ++;
    pos_rot_5 --;

    pos_rot_2 --;
    pos_rot_4 ++;
    pos_rot_6 ++;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 1
  for (int i = pos_up_1; i > 90; i -= 1) {
    pos_up_1 --;
    pos_up_3 --;
    pos_up_5 ++;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Levanta grupo 2
  for (int i = pos_up_2; i < 140; i += 1) { // pos_up_2 es la pata directora
    pos_up_2 ++;
    pos_up_4 --;
    pos_up_6 --;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i > 70; i -= 1) {
    pos_rot_1 --;
    pos_rot_3 --;
    pos_rot_5 ++;

    pos_rot_2 ++;
    pos_rot_4 --;
    pos_rot_6 --;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 2
  for (int i = pos_up_2; i > 90; i -= 1) { // pos_up_2 es la pata directora
    pos_up_2 --;
    pos_up_4 ++;
    pos_up_6 ++;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
}
void IZQUIERDA() {
  //Levanta grupo 1
  for (int i = pos_up_1; i < 140; i += 1) { //pos_up_1 es la pata directora
    pos_up_1 ++;
    pos_up_3 ++;
    pos_up_5 --;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i < 110; i += 1) {
    pos_rot_1 ++;
    pos_rot_3 ++;
    pos_rot_5 ++;

    pos_rot_2 --;
    pos_rot_4 --;
    pos_rot_6 --;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 1
  for (int i = pos_up_1; i > 90; i -= 1) {
    pos_up_1 --;
    pos_up_3 --;
    pos_up_5 ++;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Levanta grupo 2
  for (int i = pos_up_2; i < 140; i += 1) { // pos_up_2 es la pata directora
    pos_up_2 ++;
    pos_up_4 --;
    pos_up_6 --;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_1; i > 70; i -= 1) {
    pos_rot_1 --;
    pos_rot_3 --;
    pos_rot_5 --;

    pos_rot_2 ++;
    pos_rot_4 ++;
    pos_rot_6 ++;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 2
  for (int i = pos_up_2; i > 90; i -= 1) { // pos_up_2 es la pata directora
    pos_up_2 --;
    pos_up_4 ++;
    pos_up_6 ++;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
}
void DERECHA() {
  //Levanta grupo 1
  for (int i = pos_up_1; i < 140; i += 1) { //pos_up_1 es la pata directora
    pos_up_1 ++;
    pos_up_3 ++;
    pos_up_5 --;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_2; i < 110; i += 1) {
    pos_rot_1 --;
    pos_rot_3 --;
    pos_rot_5 --;

    pos_rot_2 ++;
    pos_rot_4 ++;
    pos_rot_6 ++;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 1
  for (int i = pos_up_1; i > 90; i -= 1) {
    pos_up_1 --;
    pos_up_3 --;
    pos_up_5 ++;
    up_1.write(pos_up_1);
    up_3.write(pos_up_3);
    up_5.write(pos_up_5);
    delay(VELOCIDAD_PATAS);
  }
  //Levanta grupo 2
  for (int i = pos_up_2; i < 140; i += 1) { // pos_up_2 es la pata directora
    pos_up_2 ++;
    pos_up_4 --;
    pos_up_6 --;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
  //Rota grupo 1 y 2
  for (int i = pos_rot_2; i > 70; i -= 1) {
    pos_rot_1 ++;
    pos_rot_3 ++;
    pos_rot_5 ++;

    pos_rot_2 --;
    pos_rot_4 --;
    pos_rot_6 --;
    rot_1.write(pos_rot_1);
    rot_2.write(pos_rot_2);
    rot_3.write(pos_rot_3);
    rot_4.write(pos_rot_4);
    rot_5.write(pos_rot_5);
    rot_6.write(pos_rot_6);
    delay(VELOCIDAD_PATAS);
  }
  //Baja grupo 2
  for (int i = pos_up_2; i > 90; i -= 1) { // pos_up_2 es la pata directora
    pos_up_2 --;
    pos_up_4 ++;
    pos_up_6 ++;
    up_2.write(pos_up_2);
    up_4.write(pos_up_4);
    up_6.write(pos_up_6);
    delay(VELOCIDAD_PATAS);
  }
}
void WELLERMAN() {
  DEF_POS();
  int VELOCIDAD_ZAPATEO = 6;
  //Levanta grupo 1
  for (int i = 0; i < 20; i += 1) {
    for (int i = pos_up_1; i < 140; i += 1) { //pos_up_1 es la pata directora
      pos_up_1 ++;
      pos_up_3 ++;
      pos_up_5 --;
      up_1.write(pos_up_1);
      up_3.write(pos_up_3);
      up_5.write(pos_up_5);
      delay(VELOCIDAD_ZAPATEO);
    }
    //Baja grupo 1
    for (int i = pos_up_1; i > 90; i -= 1) {
      pos_up_1 --;
      pos_up_3 --;
      pos_up_5 ++;
      up_1.write(pos_up_1);
      up_3.write(pos_up_3);
      up_5.write(pos_up_5);
      delay(VELOCIDAD_ZAPATEO);
    }
    //Levanta grupo 2
    for (int i = pos_up_2; i < 140; i += 1) { // pos_up_2 es la pata directora
      pos_up_2 ++;
      pos_up_4 --;
      pos_up_6 --;
      up_2.write(pos_up_2);
      up_4.write(pos_up_4);
      up_6.write(pos_up_6);
      delay(VELOCIDAD_ZAPATEO);
    }
    //Baja grupo 2
    for (int i = pos_up_2; i > 90; i -= 1) { // pos_up_2 es la pata directora
      pos_up_2 --;
      pos_up_4 ++;
      pos_up_6 ++;
      up_2.write(pos_up_2);
      up_4.write(pos_up_4);
      up_6.write(pos_up_6);
      delay(VELOCIDAD_ZAPATEO);
    }
  }
  // Resetea las variables
  Serial.println("stop");
  CAMINAR_ADELANTE = false;
  CAMINAR_ATRAS = false;
  CAMINAR_IZQUIERDA = false;
  CAMINAR_DERECHA = false;
  WELLERMAN_MOMENT = false;
}

void loop()
{
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n'); // Lee la entrada hasta un salto de línea

    if (input == "ad") {
      CAMINAR_ADELANTE = true;

      CAMINAR_ATRAS = false;
      CAMINAR_IZQUIERDA = false;
      CAMINAR_DERECHA = false;
      WELLERMAN_MOMENT = false;
    }
    else if (input == "at") {
      CAMINAR_ATRAS = true;

      CAMINAR_ADELANTE = false;
      CAMINAR_IZQUIERDA = false;
      CAMINAR_DERECHA = false;
      WELLERMAN_MOMENT = false;
    }
    else if (input == "iz") {
      CAMINAR_IZQUIERDA = true;

      CAMINAR_ADELANTE = false;
      CAMINAR_ATRAS = false;
      CAMINAR_DERECHA = false;
      WELLERMAN_MOMENT = false;
    }
    else if (input == "de") {
      CAMINAR_DERECHA = true;

      CAMINAR_ADELANTE = false;
      CAMINAR_ATRAS = false;
      CAMINAR_IZQUIERDA = false;
      WELLERMAN_MOMENT = false;
    }
    else if (input == "wm") {
      Serial.println("wm");
      WELLERMAN_MOMENT = true;

      CAMINAR_DERECHA = false;
      CAMINAR_ADELANTE = false;
      CAMINAR_ATRAS = false;
      CAMINAR_IZQUIERDA = false;
    }
    else {
      // Resetea las variables
      Serial.println("stop");
      CAMINAR_ADELANTE = false;
      CAMINAR_ATRAS = false;
      CAMINAR_IZQUIERDA = false;
      CAMINAR_DERECHA = false;
      WELLERMAN_MOMENT = false;
    }
  }
  
  if (CAMINAR_ADELANTE) {
    CAMINAR();
  }
  else if (CAMINAR_ATRAS) {
    RETROCEDER();
  }
  else if (CAMINAR_DERECHA) {
    DERECHA();
  }
  else if (CAMINAR_IZQUIERDA) {
    IZQUIERDA();
  }
  else if (WELLERMAN_MOMENT) {
    WELLERMAN();
  }
  else {
    DEF_POS();
  }
}




