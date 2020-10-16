//Blink Led V1.0
//Autor: Guilherme Lopes
//Data: 16/10/2020

#include <Arduino.h>

#define LED_RED D2 //definir o pino D3 como LED_RED - pode utilizar D3 ou 0 (GPIO0)

void setup() 
{
  pinMode(LED_RED, OUTPUT); //LED_RED setado como saída digital
  digitalWrite(LED_RED, LOW); //LED_RED setado como nível lógico baixo
}

void loop() 
{
  //aqui o led ficará ligado por 1 segundo e em seguida irá apagar e assim se manter por mais um segundo
 digitalWrite(LED_RED, HIGH);
 delay(1000);
 digitalWrite(LED_RED, LOW);
 delay(1000);
}


