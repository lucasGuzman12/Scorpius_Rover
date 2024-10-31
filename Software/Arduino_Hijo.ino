//BUZER----------------------------------------------------
// Definición de notas en Hertz (primera octava)
#define DO 261
#define DO_S 277
#define RE 294
#define RE_S 311
#define MI 329
#define FA 349
#define FA_S 370
#define SOL 392
#define SOL_S 415
#define LA 440
#define LA_S 466
#define SI 494
// Definición de notas en Hertz (segunda octava)
#define DO2 523
#define DO_S2 554
#define RE2 587
#define RE_S2 622
#define MI2 659
#define FA2 698
#define FA_S2 740
#define SOL2 784
#define SOL_S2 831
#define LA2 880
#define LA_S2 932
#define SI2 988
// Definición de figuras musicales (relativo a la negra)
#define REDONDA 4
#define BLANCA 2
#define NEGRA 1
#define CORCHEA 0.5
#define SEMICORCHEA 0.25
#define FUSA 0.125
#define SEMIFUSA 0.0625

const int buzzerPin = 11;
int tempo = 615;



//SENSORES------------------------------------------------
#include <DHT.h>

//Temp y humedad
#define DHTPIN 12      // Pin donde del DHT11
#define DHTTYPE DHT11 // Tipo de sensor DHT

//Distancia
#define TRIG_PIN 9   // Pin digital para el TRIG del ultrasonico
#define ECHO_PIN 10  // Pin digital para el ECHO del ultrasonico

// Instancia del sensor DHT11
DHT dht(DHTPIN, DHTTYPE);
//--------------------------------------------------------



//FUNCIONES PARA EL BUZZER -------------------------------
// Función para sonar una nota en el buzzer con o sin estacato y con o sin puntillo
void sonarNota(int frecuencia, float figura, bool estacato, bool puntillo) {
  // Calcula la duración total en función de la figura musical
  int duracion = tempo * figura;
  // Si el puntillo está activado, incrementa la duración en un 50%
  if (puntillo) {
    duracion += duracion / 2;
  }
  // Si el estacato está activado, se suena la nota por la mitad del tiempo
  if (estacato) {
    int estacatoDuracion = duracion / 2; // El estacato suena la mitad del tiempo de la nota
    tone(buzzerPin, frecuencia);         // Emitir la nota
    delay(estacatoDuracion);             // Sonar la nota con estacato
    noTone(buzzerPin);                   // Detener el sonido
    delay(duracion - estacatoDuracion);  // Pausa para completar el tiempo de la figura
  } else {
    // Si no hay estacato, la nota suena por la duración completa
    tone(buzzerPin, frecuencia);         // Emitir la nota
    delay(duracion);                     // Sonar la nota completa sin estacato
    noTone(buzzerPin);                   // Detener el sonido
    delay(tempo / 2);                    // Pausa estándar entre notas
  }
}
// Funcion con la cancion WELLERMAN de Nathan Evans
void WELLERMAN() {
  delay(2000);
  //Compas 1
  sonarNota(SOL, CORCHEA, true, false);
  //Compas 2
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(DO, SEMICORCHEA, true, false);
  sonarNota(DO, SEMICORCHEA, true, false);
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(MI, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, SEMICORCHEA, true, false);
  sonarNota(SOL, SEMICORCHEA, true, false);
  //Compas 3
  sonarNota(SOL_S, CORCHEA, true, false);
  sonarNota(FA, SEMICORCHEA, true, false);
  sonarNota(FA, SEMICORCHEA, true, false);
  sonarNota(FA, CORCHEA, true, false);
  sonarNota(LA, SEMICORCHEA, true, false);
  sonarNota(LA, SEMICORCHEA, true, false);
  sonarNota(DO2, SEMICORCHEA, true, false);
  sonarNota(DO2, SEMICORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, true);
  sonarNota(SOL, SEMICORCHEA, true, false);
  //Compas 4
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(RE_S, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, NEGRA, true, false);
  //Compas 5
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(FA, CORCHEA, true, false);
  sonarNota(RE_S, SEMICORCHEA, true, false);
  sonarNota(RE_S, SEMICORCHEA, true, false);
  sonarNota(RE, CORCHEA, true, false);
  sonarNota(DO, NEGRA, true, false);
  sonarNota(DO2, NEGRA, true, false);
  //Compas 6
  sonarNota(DO2, NEGRA, true, false);
  sonarNota(DO2, CORCHEA, true, true);
  sonarNota(SOL_S, SEMICORCHEA, true, false);
  sonarNota(LA_S, SEMICORCHEA, true, false);
  sonarNota(LA_S, SEMICORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, true);
  sonarNota(SOL, SEMICORCHEA, true, false);
  //Compas 7
  sonarNota(SOL_S, CORCHEA, true, false);
  sonarNota(FA, CORCHEA, true, false);
  sonarNota(FA, SEMICORCHEA, true, false);
  sonarNota(SOL, SEMICORCHEA, true, false);
  sonarNota(SOL_S, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(RE_S, CORCHEA, true, false);
  sonarNota(DO, NEGRA, true, false);
  //Compas 8
  sonarNota(DO, NEGRA, true, false);
  sonarNota(DO, CORCHEA, true, false);
  sonarNota(LA_S, SEMICORCHEA, true, false);
  sonarNota(SOL_S, SEMICORCHEA, true, false);
  sonarNota(LA_S, SEMICORCHEA, true, false);
  sonarNota(LA_S, SEMICORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(FA, CORCHEA, true, false);
  //Compas 9
  sonarNota(SOL, CORCHEA, true, false);
  sonarNota(FA, CORCHEA, true, false);
  sonarNota(RE_S, CORCHEA, true, false);
  sonarNota(RE, CORCHEA, true, false);
  sonarNota(DO, NEGRA, true, false);

}
//--------------------------------------------------------

//FUNCIONES SENSORES--------------------------------------
// Función para leer la distancia con el sensor ultrasonico
void leerSensorUltrasonico() {
  // Envía un pulso ultrasónico
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Calcula el tiempo que tarda el eco
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calcula la distancia en metros
  float distance = (duration * 0.0343) / 2; // Conversión a metros
  
  // Imprime la distancia en metros
  Serial.print(distance, 2); // 2 decimales de precisión
}
//Funcion para leer la temp y humedad
void leerSensorDHT() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();  // en grados Celsius

  Serial.print("---");
  Serial.print(temperature);
  Serial.print("---");
  Serial.print(humidity);
  Serial.println("---");
  delay(1000);
}
//--------------------------------------------------------






void setup() {
  Serial.begin(9600);

  //Puerto del buzzer
  pinMode(buzzerPin, OUTPUT);
  //Inicializa el sensor DHT11
  dht.begin();
  // Configura los pines del sensor ultrasónico
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input == "wm") {
      delay(3200);
      WELLERMAN();
    }
    else {
      Serial.println("stop");
    }
  }

  //Se lee la distancia, temperatura y humedad
  leerSensorUltrasonico();
  leerSensorDHT();
}
