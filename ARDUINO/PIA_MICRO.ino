#include <Servo.h>

Servo aletaIzq;
Servo aletaDer;
Servo cola;
Servo boca; 

const int boton = 2;
int estado = 0;

void setup() {
  aletaIzq.attach(9);
  aletaDer.attach(10);
  cola.attach(11);
  boca.attach(12);  
  pinMode(boton, INPUT);
}

void loop() {
  estado = digitalRead(boton);

  if (estado == HIGH) {
    // Movimiento de aletas, cola y boca
    for (int pos = 0; pos <= 60; pos += 2) {
      aletaIzq.write(90 + pos);
      aletaDer.write(90 - pos);
      cola.write(90 + pos);
      boca.write(90 + pos/2); // Boca se abre suavemente
      delay(25);
    }

    for (int pos = 60; pos >= 0; pos -= 2) {
      aletaIzq.write(90 + pos);
      aletaDer.write(90 - pos);
      cola.write(90 - pos);
      boca.write(90 - pos/2); // Boca se cierra
      delay(25);
    }

  } else {
    // Posición neutral
    aletaIzq.write(90);
    aletaDer.write(90);
    cola.write(90);
    boca.write(90); 
  }
}
