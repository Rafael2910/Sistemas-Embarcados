// C++ code
//
 void setup() {
  pinMode(7, OUTPUT);    // define o pino 7 como saída
  pinMode(6, OUTPUT);   // define o pino 6 como saída
  pinMode(5, OUTPUT);   // define o pino 5 como saída
  pinMode(4,OUTPUT);
 }
   void loop()
   {
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);
  
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
   }
  