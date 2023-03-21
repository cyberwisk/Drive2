/*
Drive.h - Biblioteca para com as fuçoes de curva em angulo em 08/03/2023 por Aurélio Avanzi
version=1.0.1
author=Aurelio Monteiro Avanzi <cyberwisk@gmail.com>
Arduino library para ponte H (tambem funciona com esp8266 e Esp32)
Controle para Robos de esteira de forma simples.
url=https://github.com/cyberwisk/Drive
*/

#include "Arduino.h"
#include "Drive.h"

int turn_radius = 3; //relação de raio de curva

Drive::Drive(int IN1, int IN2, int IN3, int IN4)
{
  pinMode(IN1, OUTPUT);  
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  _IN1 = IN1;
  _IN2 = IN2;
  _IN3 = IN3;
  _IN4 = IN4;
}

bool Drive::moveForward(int speed)
{
  analogWrite(_IN1, speed);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, speed);
  analogWrite(_IN4, LOW);  
  return true;
}

bool Drive::moveBackward(int speed)
{
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed); 
  return true;
}

bool Drive::turnLeft(int speed)
{
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed);
  analogWrite(_IN3, speed);
  analogWrite(_IN4, LOW);
  return true;
}

bool Drive::turnRight(int speed)
{
  analogWrite(_IN1, speed);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed);  
  return true;  
}

bool Drive::moveforwardLeft(int speed)
{
  analogWrite(_IN1, speed/turn_radius);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, speed);
  analogWrite(_IN4, LOW);  
  return true;
}

bool Drive::moveforwardRight(int speed)
{
  analogWrite(_IN1, speed);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, speed/turn_radius);
  analogWrite(_IN4, LOW);  
  return true;
}

bool Drive::moveBackwardLeft(int speed)
{
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed/turn_radius);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed); 
  return true;
}

bool Drive::moveBackwardRight(int speed)
{
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, speed);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, speed/turn_radius); 
  return true;
}

bool Drive::stopMoving()
{
  analogWrite(_IN1, LOW);
  analogWrite(_IN2, LOW);
  analogWrite(_IN3, LOW);
  analogWrite(_IN4, LOW); 
  return true;  
}
