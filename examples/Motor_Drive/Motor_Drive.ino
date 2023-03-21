/********************************************************************
 * Exemplo de uso da Biblioteca Drive 
 * created 14 Nov 2018
 * Aurélio Monteiro Avanzi
 * 08/03/2023
 * 
 * L298N usa apenas 4 fios Não precisamos de um pino de habilitação
 * Deixe o os dois jumpers ENABLE conectados.
*********************************************************************/

#include <Drive.h>drive

//Definindo os pinos do Arduino
//Pelo menos dois pinos tem que ser PWM obrigatóriamente
#define IN1 5
#define IN1 4
#define IN1 12
#define IN1 13

Drive drive(IN1, IN2, IN3, IN4);

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciando Drive");
  int speed = 300;
}

void loop() {
  drive.moveForward(speed);
  delay(1000);
  drive.moveBackward(speed);
  delay(2000);
  drive.turnRight(speed);
  delay(3000);
  drive.turnLeft(speed);
  delay(4000);
  drive.moveforwardLeft (speed);
  delay(5000);
  drive.moveforwardRight(speed);
  delay(5000);
  drive.moveBackwardLeft(speed);
  delay(5000);
  drive.moveBackwardRight(speed);
  delay(5000);
  drive.stopMoving(speed);
}
