**Pez Come Plástico**<br>

**Descripción del proyecto:**<br>
Pez Come Plástico es un proyecto educativo de robótica ambiental que simula un pez capaz de moverse mediante servomotores y “comer” residuos plásticos flotantes.
Su objetivo es crear conciencia sobre la contaminación marina y demostrar cómo la tecnología puede ayudar a reducir los efectos del plástico en los ecosistemas acuáticos.
El sistema se basa en un Arduino UNO (ATmega328P), tres servomotores que controlan las aletas y la cola, y un pulsador que activa el movimiento del pez.
El comportamiento del pez se puede simular en Proteus o probar físicamente con el montaje real.

**Requisitos e instalación**<br>
**Requisitos de hardware**<br>
*1 × Arduino UNO (ATmega328P)<br>
*4 × Servomotores SG90<br>
*1 × Pulsador (botón)<br>
*1 × Fuente de 5V (2A recomendada)<br>
*Cables Dupont macho–macho / macho–hembra<br>

**Requisitos de software**<br>
*Arduino IDE 2.x o superior<br>
*Proteus 8.13 o superior<br>
*Librería Servo.h (incluida por defecto en Arduino IDE)<br>

**Instalación**<br>
1.- Clona el repositorio del proyecto:<br>
git clone https://github.com/tuusuario/pez-come-plastico.git<br>

2.- Abre la carpeta del proyecto:<br>
cd pez-come-plastico/Código_Arduino<br>

3.- Abre el archivo Pez Comeplastico.ino en Arduino IDE.<br>
4.- Verifica la compilación (Ctrl + R) y genera el archivo .hex para usarlo en Proteus.<br>

**Cómo usarlo**<br>
**Simulación en Proteus:**<br>
1.- Abre el archivo: Pez Comeplastico.pdsprj<br>
2.- Asocia el archivo .hex al microcontrolador ATmega328P.<br>
3.- Inicia la simulación y presiona el botón para alternar entre:<br>
*Modo activo: el pez se mueve simulando que nada.<br>
*Modo reposo: el pez se detiene.<br>

**Uso en hardware real**<br>
1.- Conecta los componentes así:<br>
*Servo aleta izquierda → Pin 9<br>
*Servo aleta derecha → Pin 10<br>
*Servo cola → Pin 11<br>
*Servo boca → Pin 12<br>
*Pulsador → Pin 2<br>
*GND común para todos los servos y botón<br>
2.- Carga el código desde Arduino IDE.<br>
3.- Alimenta el sistema con 5V (fuente externa o USB).<br>
4.- Presiona el botón para activar el movimiento del pez.<br>

📁 **Estructura del proyecto**<br>
PEZ/<br>
│<br>
├── ARDUINO/<br>
│   └── PIA_MICRO.ino<br>
│<br>
├── PROTEUS/<br>
│   └── Pez_Proteus.pdsprj<br>
│<br>
├── DIAGRAMAS/<br>
│   ├── ESQUEMATICO_PEZ.png<br>
│   ├── PEZ_DIAGRAMA_BLOQUES.png<br>
│   ├── PEZ_DIAGRAMA_PICTORICO.png<br>
│   ├── PEZ_DIAGRAMA_ARQUITECTURA.png<br>
│   ├── PEZ_DIAGRAMA_SECUENCIA.png<br>
│   └── PEZ_DIAGRAMA_FLUJO.png<br>
│<br>
├── DOCUMENTACION/<br>
│   ├── DOCUMENTACION.pdf<br>
│   └── DOCUMENTACION.docx<br>
│<br>
└── README.md<br>

