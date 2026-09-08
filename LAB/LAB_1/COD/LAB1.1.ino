
int PULSADOR = 2;  //variable definida
int LED = 3;  //variable definida

void setup () {
  pinMode (PULSADOR, INPUT); //pin 2 como entrada
  pinMode (LED, OUTPUT); //pin 3 como salida
}

void loop (){
  if (digitalRead(2) == HIGH){ // evaluo si la entrada esta en nivel alto
    digitalWrite (3, HIGH); // pulsador presionado, encender LED
  } 
  else{
    digitalWrite(3, LOW); // pulsador no presionado, apagar LED
  }
}