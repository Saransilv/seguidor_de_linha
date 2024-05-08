#include "mybot.h"

void iniciar_robo(){
  pinMode(PINO_MOTOR_1_A, OUTPUT);
  pinMode(PINO_MOTOR_1_B, OUTPUT);
  pinMode(PINO_MOTOR_1_C, OUTPUT);

  pinMode(PINO_MOTOR_2_A, OUTPUT);
  pinMode(PINO_MOTOR_2_B, OUTPUT);
  pinMode(PINO_MOTOR_2_C, OUTPUT);

  pinMode(PINO_SENSOR_ESQUERDO, INPUT);
  pinMode(PINO_SENSOR_DIREITO, INPUT);
}


void motor_1_frente(int velocidade){
  digitalWrite(PINO_MOTOR_1_A,HIGH);
  digitalWrite(PINO_MOTOR_1_B,LOW);
  analogWrite(PINO_MOTOR_1_C, velocidade);
}
void motor_1_tras(int velocidade){
  digitalWrite(PINO_MOTOR_1_A,LOW);
  digitalWrite(PINO_MOTOR_1_B,HIGH);
  analogWrite(PINO_MOTOR_1_C, velocidade);
}
void motor_1_parar(){
  digitalWrite(PINO_MOTOR_1_A,HIGH);
  digitalWrite(PINO_MOTOR_1_B,HIGH);
  analogWrite(PINO_MOTOR_1_C, 255);
}
void motor_2_frente(int velocidade){
  digitalWrite(PINO_MOTOR_2_A,HIGH);
  digitalWrite(PINO_MOTOR_2_B,LOW);
  analogWrite(PINO_MOTOR_2_C, velocidade);
}
void motor_2_tras(int velocidade){
  digitalWrite(PINO_MOTOR_2_A,LOW);
  digitalWrite(PINO_MOTOR_2_B,HIGH);
  analogWrite(PINO_MOTOR_2_C, velocidade);
}
void motor_2_parar(){
  digitalWrite(PINO_MOTOR_2_A,HIGH);
  digitalWrite(PINO_MOTOR_2_B,HIGH);
  analogWrite(PINO_MOTOR_2_C, 0);
}


void frente(int velocidade){
  motor_1_frente(velocidade);
  motor_2_frente(velocidade);
}
void tras(int velocidade){
  motor_1_tras(velocidade);
  motor_2_tras(velocidade);
}
void esquerda(int velocidade){
  motor_1_frente(velocidade);
  motor_2_tras(velocidade);
}
void direita(int velocidade){
  motor_1_tras(velocidade);
  motor_2_frente(velocidade);
}
void parar(){
  motor_1_parar();
  motor_2_parar();
}

int sensor_esquerdo(){
  return digitalRead(PINO_SENSOR_ESQUERDO);
}


int sensor_direito(){
  return digitalRead(PINO_SENSOR_DIREITO);
}
