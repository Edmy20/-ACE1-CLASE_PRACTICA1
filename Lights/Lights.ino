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


  sem1Green();
  sem1Yellow();
  sem2Green();
  sem2Yellow();
  sem3Green();
  sem3Yellow();
  sem4Green();
  sem4Yellow();
 
}


void sem1Green(){
  digitalWrite(semaforo1[2], HIGH);
  digitalWrite(semaforo1[0], LOW);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[0], HIGH);
  delay(10000);
  }

void sem1Yellow(){
  digitalWrite(semaforo1[1], HIGH);
  digitalWrite(semaforo1[2], LOW);
  delay(3000);
  digitalWrite(semaforo1[1], LOW);
  }


void sem2Green(){
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[2], HIGH);
  digitalWrite(semaforo2[0], LOW);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[0], HIGH);
  delay(10000);
  }

void sem2Yellow(){
  digitalWrite(semaforo2[1], HIGH);
  digitalWrite(semaforo2[2], LOW);
  delay(3000);
  digitalWrite(semaforo2[1], LOW);
  }


void sem3Green(){
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[2], HIGH);
  digitalWrite(semaforo3[0], LOW);
  digitalWrite(semaforo4[0], HIGH);
  delay(10000);
  }

void sem3Yellow(){
  digitalWrite(semaforo3[1], HIGH);
  digitalWrite(semaforo3[2], LOW);
  delay(3000);
  digitalWrite(semaforo3[1], LOW);
  }

  void sem4Green(){
  digitalWrite(semaforo1[0], HIGH);
  digitalWrite(semaforo2[0], HIGH);
  digitalWrite(semaforo3[0], HIGH);
  digitalWrite(semaforo4[2], HIGH);
  digitalWrite(semaforo4[0], LOW);
  delay(10000);
  }

void sem4Yellow(){
  digitalWrite(semaforo4[1], HIGH);
  digitalWrite(semaforo4[2], LOW);
  delay(3000);
  digitalWrite(semaforo4[1], LOW);
  }
