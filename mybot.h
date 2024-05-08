#ifndef _MYBOT_H
#define _MYBOT_H

#define PRETO 1
#define BRANCO 0

#include <Arduino.h>

#define PINO_MOTOR_1_A 7 
#define PINO_MOTOR_1_B 8 
#define PINO_MOTOR_1_C 9

#define PINO_MOTOR_2_A 4
#define PINO_MOTOR_2_B 2 
#define PINO_MOTOR_2_C 3

#define PINO_SENSOR_ESQUERDO 13
#define PINO_SENSOR_DIREITO A4

void iniciar_robo();

void motor_1_frente(int velocidade);
void motor_1_tras(int velocidade);
void motor_1_parar(int velocidade);
void motor_2_frente(int velocidade);
void motor_2_tras(int velocidade);
void motor_2_parar(int velocidade);


void frente(int velocidade);
void tras(int velocidade);
void esquerda(int velocidade);
void direita(int velocidade);
void parar();

int sensor_direito();
int sensor_esquerdo();


#endif
