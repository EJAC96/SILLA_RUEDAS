void setup() {
  pinMode(2, OUTPUT); //Pin 2 configurado como salida
  pinMode(3, OUTPUT); //Pin 3 configurado como salida
  pinMode(4, OUTPUT); //Pin 4 configurado como salida
  pinMode(5, OUTPUT); //Pin 5 configurado como salida
  pinMode(6, OUTPUT); //Pin 6 configurado como salida
  pinMode(9, OUTPUT); //Pin 9 configurado como salida
}

void loop() {
  //Control de velocidad
  //analogWrite(pin, valor PWM);
  analogWrite(6,100); //Min: 0 - Máx: 255
  analogWrite(9,50);  //Min: 0 - Máx: 255
  
  //Adelante
  digitalWrite(2, HIGH);  //Encender el pin 2
  digitalWrite(3, LOW);   //Apagar el pin 3
  digitalWrite(4, HIGH);  //Encender el pin 2
  digitalWrite(5, LOW);   //Apagar el pin 5  
  delay(2000);
  
  //PARAR - STOP
  digitalWrite(2,LOW);  //Apagar el pin 2
  digitalWrite(3, LOW); //Apagar el pin 3
  digitalWrite(4,LOW);  //Apagar el pin 4
  digitalWrite(5, LOW); //Apagar el pin 5
  delay(1500);
  
  //REVERSA
  digitalWrite(3, HIGH);  //Encender el pin 2
  digitalWrite(2, LOW);   //Apagar el pin 2
  digitalWrite(5, HIGH);  //Encender el pin 5
  digitalWrite(4, LOW);   //Apagar el pin 4
  delay(1500);
  
  //PARAR - STOP
  digitalWrite(2, LOW);   //Apagar el pin 2
  digitalWrite(3, LOW);   //Apagar el pin 3
  digitalWrite(4, LOW);   //Apagar el pin 4
  digitalWrite(5, LOW);   //Apagar el pin 5
  delay(1500);

  //Girar izq.
  digitalWrite(2, HIGH);  //Encender el pin 2
  digitalWrite(3, LOW);   //Apagar el pin 3
  digitalWrite(4, LOW);   //Apagar el pin 4
  digitalWrite(5, HIGH);  //Encender el pin 5

  //Girar der.
  digitalWrite(2, LOW);   //Apagar el pin 2
  digitalWrite(3, HIGH);  //Encender el pin 3
  digitalWrite(4, HIGH);  //Encender el pin 4
  digitalWrite(5, LOW);   //Apagar el pin 5
    
}
