/*
Equivalencia das saidas Digitais entre nodeMCU e ESP8266 (na IDE do Arduino)
NodeMCU – ESP8266
D0 = 16;
D1 = 5;
D2 = 4;
D3 = 0;
D4 = 2;
D5 = 14;
D6 = 12;
D7 = 13;
D8 = 15;
D9 = 3;
D10 = 1;
*/

const int B = 16;
const int G = 5;
const int R = 4;

void setup() {
  pinMode(B, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(R, OUTPUT);
  analogWrite(R, 1023);     // R off
  analogWrite(G, 1023);     // G off
  analogWrite(B, 1023);     // B off 
}

void loop() {
  fade(R); // R
  fade(G); // G
  fade(B); // B
}

void fade(int pin) {
    for (int u = 0; u < 1024; u++) {
      analogWrite(pin,  1023 - u);
      delay(1);
    }
    for (int u = 0; u < 1024; u++) {
      analogWrite(pin, u);
      delay(1);
    }
}
