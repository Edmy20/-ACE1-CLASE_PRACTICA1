int semaforo1[] = {22, 23, 24};
int semaforo2[] = {25, 26, 27};
int semaforo3[] = {28, 29, 30};
int semaforo4[] = {31, 32, 33};


void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(semaforo1[i], OUTPUT);
    pinMode(semaforo2[i], OUTPUT);
    pinMode(semaforo3[i], OUTPUT);
    pinMode(semaforo4[i], OUTPUT);
  }

}

void loop() {
  digitalWrite(semaforo1[2], HIGH);
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[0], HIGH);
  delay(10000);
  // Making Green LED at semaforo 1 LOW and making yellow LED at semaforo 1 HIGH for 2 seconds
  digitalWrite(semaforo1[1], HIGH);
  digitalWrite(semaforo1[2], LOW);
  delay(1000);
  digitalWrite(semaforo1[1], LOW);
  // Making Green  LED at semaforo 2 and red LED's at other semaforo HIGH
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[2], HIGH);
  digitalWrite(semaforo2[0], LOW);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[0], HIGH);
  delay(2000);
  // Making Green LED at semaforo 2 LOW and making yellow LED at semaforo 2 HIGH for 2 seconds
  digitalWrite(semaforo2[1], HIGH);
  digitalWrite(semaforo2[2], LOW);
  delay(1000);
  digitalWrite(semaforo2[1], LOW);
  // Making Green  LED at semaforo 3 and red LED's at other semaforo HIGH
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[2], HIGH);
  digitalWrite(semaforo3[0], LOW);
  digitalWrite(semaforo4[0], HIGH);
  delay(1000);
  // Making Green LED at semaforo 3 LOW and making yellow LED at semaforo 3 HIGH for 2 seconds
  digitalWrite(semaforo3[1], HIGH);
  digitalWrite(semaforo3[2], LOW);
  delay(1000);
  digitalWrite(semaforo3[1], LOW);
  // Making Green  LED at semaforo 4 and red LED's at other semaforo HIGH
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[2], HIGH);
  digitalWrite(semaforo4[0], LOW);
  delay(2000);
  // Making Green LED at semaforo 4 LOW and making yellow LED at semaforo 4 HIGH for 2 seconds
  digitalWrite(semaforo4[1], HIGH);
  digitalWrite(semaforo4[2], LOW);
  delay(2000);
  digitalWrite(semaforo4[1], LOW);
}
