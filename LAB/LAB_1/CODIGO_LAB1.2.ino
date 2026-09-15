
int PULSADOR = 2;  //variable definida
int LED = 3;  //variable definida
int ESTADO = LOW;

void setup () {
  pinMode (PULSADOR, INPUT); //pin 2 como entrada
  pinMode (LED, OUTPUT); //pin 3 como salida
}

void loop (){
  while (digitalRead(PULSADOR) == LOW){ // en espera de pulsar 

  }
  ESTADO = digitalRead(LED);  //leo el estado 
  digitalWrite(LED, !ESTADO);  //escribo valor contrario
  while(digitalRead(PULSADOR) == HIGH){  //antirebote del pulsador

  }
}
