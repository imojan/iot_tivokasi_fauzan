#include <Arduino.h>

// Deklarasi pin tombol
const int tombol1 = 33;
const int tombol2 = 35;
const int tombol3 = 32;

// Deklarasi pin LED
const int lampuMerah = 17;
const int lampuKuning = 18;
const int lampuHijau = 19;

void setup() {
  Serial.begin(115200);
  Serial.println("Program LED dan Tombol ESP32");

  // Konfigurasi tombol sebagai input dengan pull-up internal
  pinMode(tombol1, INPUT_PULLUP);
  pinMode(tombol2, INPUT_PULLUP);
  pinMode(tombol3, INPUT_PULLUP);

  // Konfigurasi LED sebagai output
  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  if (digitalRead(tombol1) == LOW) {
    // Tombol 1: Lampu merah berkedip 5 kali
    for (int i = 0; i < 5; i++) {
      digitalWrite(lampuMerah, HIGH);
      Serial.println("Merah Menyala");
      delay(500);
      digitalWrite(lampuMerah, LOW);
      Serial.println("Merah Padam");
      delay(500);
    }
  }

  if (digitalRead(tombol2) == LOW) {
    // Tombol 2: Lampu merah dan hijau berkedip bergantian
    for (int i = 0; i < 5; i++) {
      digitalWrite(lampuMerah, HIGH);
      digitalWrite(lampuHijau, LOW);
      Serial.println("Merah Menyala");
      delay(500);
      digitalWrite(lampuMerah, LOW);
      digitalWrite(lampuHijau, HIGH);
      Serial.println("Hijau Menyala");
      delay(500);
    }
    digitalWrite(lampuHijau, LOW); // Matikan LED setelah selesai
  }

  if (digitalRead(tombol3) == LOW) {
    // Tombol 3: Lampu merah, kuning, dan hijau berkedip bergantian
    for (int i = 0; i < 5; i++) {
      digitalWrite(lampuMerah, HIGH);
      Serial.println("Merah Menyala");
      delay(500);
      digitalWrite(lampuMerah, LOW);
      digitalWrite(lampuKuning, HIGH);
      Serial.println("Kuning Menyala");
      delay(500);
      digitalWrite(lampuKuning, LOW);
      digitalWrite(lampuHijau, HIGH);
      Serial.println("Hijau Menyala");
      delay(500);
      digitalWrite(lampuHijau, LOW);
    }
  }
}
