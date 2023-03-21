/*
Drive.h - Biblioteca para com as fuçoes de curva em angulo em 08/03/2023 por Aurélio Avanzi
version=1.0.1
author=Aurelio Monteiro Avanzi <cyberwisk@gmail.com>
Arduino library para ponte H (tambem funciona com esp8266 e Esp32)
Controle para Robos de esteira de forma simples.
url=https://github.com/cyberwisk/Drive
*/

#ifndef Drive_h
#define Drive_h

#include "Arduino.h"

class Drive
{
  public:
    Drive(int IN1, int IN2, int IN3, int IN4);
    bool moveForward(int speed);
    bool moveBackward(int speed);
    bool turnRight(int speed);
    bool forwardLeft(int speed);
    bool turnLeft(int speed);
    bool moveforwardLeft(int speed);
	  bool moveforwardRight(int speed);
	  bool moveBackwardLeft (int speed);
	  bool moveBackwardRight(int speed);
    bool stopMoving();
  private:
	int _IN1;
	int	_IN2;
	int _IN3;
	int _IN4;
};

#endif
