#include <Arduino.h>
// put function declarations here:
int ledm = 17; //pin LED Merah
int ledk = 18; //pin LED Kuning
int ledh = 19; //pin LED Hijau
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledm, HIGH); //Status LED Merah Menyala
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  Serial.println(" ");
  Serial.println("Merah Menyala");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Mati");
  delay(30000); //Durasi Lampu Merah Selama 30 Detik
  Serial.println(" ");
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH); //Status LED Kuning Menyala
  digitalWrite(ledh, LOW);
  Serial.println("Merah Mati");
  Serial.println("Kuning Menyala");
  Serial.println("Hijau Mati");
  delay(5000); //Durasi Lampu Kuning Selama 5 Detik
  Serial.println(" ");
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH); //Status LED Hijau Menyala
  Serial.println("Merah Mati");
  Serial.println("Kuning Mati");
  Serial.println("Hijau Menyala");
  delay(20000); //Durasi Lampu Hijau Selama 20 Detik
}