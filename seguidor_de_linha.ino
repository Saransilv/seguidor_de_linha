#include "mybot.h"
int velocidade = 90;

void setup() {
  iniciar_robo();
  Serial.begin(9600);
  delay(5000);
}

void loop() {
  int sd = sensor_direito();
  int se = sensor_esquerdo();
  
  Serial.print(se? "Preto ": "Branco ");
  Serial.print(sd? "Preto\n": "Branco\n");

  if(se == BRANCO && sd == BRANCO){
    frente(velocidade);
  }

  if(se == BRANCO && sd == PRETO){
    direita(velocidade);
  }
  if(se == PRETO && sd == BRANCO){
    esquerda(velocidade);
  }

  if (se == PRETO && sd == PRETO){
    parar();
  }
  delay(10);
}
