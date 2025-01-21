//Program for Multilevel Inverter

#include <stdio.h>
#include <stdlib.h>

// Pin Definitions
const int pulse1 = 2;
const int pulse2 = 3;
const int pulse3 = 4;
const int pulse4 = 5;
const int pulse5 = 6;
const int pulse6 = 7;
const int pulse7 = 8;
const int pulse8 = 9;

void setup() {
  Serial.begin(9600);

  // Configure pins as output
  pinMode(pulse1, OUTPUT);
  pinMode(pulse2, OUTPUT);
  pinMode(pulse3, OUTPUT);
  pinMode(pulse4, OUTPUT);
  pinMode(pulse5, OUTPUT);
  pinMode(pulse6, OUTPUT);
  pinMode(pulse7, OUTPUT);
  pinMode(pulse8, OUTPUT);

  // Set initial states
  digitalWrite(pulse1, LOW);
  digitalWrite(pulse2, LOW);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, HIGH);
  digitalWrite(pulse5, HIGH);
  digitalWrite(pulse6, LOW);
  digitalWrite(pulse7, LOW);
  digitalWrite(pulse8, HIGH);
}

// State Functions
void zero() {
  digitalWrite(pulse1, LOW);
  digitalWrite(pulse2, LOW);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, HIGH);
  digitalWrite(pulse6, LOW);
  digitalWrite(pulse7, HIGH);
  digitalWrite(pulse8, LOW);
}

void first() {
  digitalWrite(pulse1, HIGH);
  digitalWrite(pulse2, LOW);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, HIGH);
  digitalWrite(pulse6, LOW);
  digitalWrite(pulse7, LOW);
  digitalWrite(pulse8, HIGH);
}

void second() {
  digitalWrite(pulse1, HIGH);
  digitalWrite(pulse2, HIGH);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, HIGH);
  digitalWrite(pulse6, LOW);
  digitalWrite(pulse7, LOW);
  digitalWrite(pulse8, LOW);
}

void third() {
  digitalWrite(pulse1, HIGH);
  digitalWrite(pulse2, HIGH);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, HIGH);
  digitalWrite(pulse6, LOW);
  digitalWrite(pulse7, LOW);
  digitalWrite(pulse8, HIGH);
}

void fourth() {
  digitalWrite(pulse1, LOW);
  digitalWrite(pulse2, HIGH);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, LOW);
  digitalWrite(pulse6, HIGH);
  digitalWrite(pulse7, HIGH);
  digitalWrite(pulse8, LOW);
}

void fifth() {
  digitalWrite(pulse1, LOW);
  digitalWrite(pulse2, HIGH);
  digitalWrite(pulse3, HIGH);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, LOW);
  digitalWrite(pulse6, HIGH);
  digitalWrite(pulse7, HIGH);
  digitalWrite(pulse8, LOW);
}

void sixth() {
  digitalWrite(pulse1, HIGH);
  digitalWrite(pulse2, HIGH);
  digitalWrite(pulse3, LOW);
  digitalWrite(pulse4, LOW);
  digitalWrite(pulse5, LOW);
  digitalWrite(pulse6, HIGH);
  digitalWrite(pulse7, HIGH);
  digitalWrite(pulse8, LOW);
}

void multi_hz() {
  zero(); delayMicroseconds(1600);
  first(); delayMicroseconds(1600);
  second(); delayMicroseconds(1600);
  third(); delayMicroseconds(1600);
  second(); delayMicroseconds(1600);
  first(); delayMicroseconds(1600);
  zero(); delayMicroseconds(1600);
  fourth(); delayMicroseconds(1600);
  fifth(); delayMicroseconds(1600);
  sixth(); delayMicroseconds(1600);
  fifth(); delayMicroseconds(1600);
  fourth(); delayMicroseconds(1600);
}

void loop() {
  multi_hz();
}

