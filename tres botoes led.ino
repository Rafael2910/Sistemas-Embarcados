int ledVermelho=8;
int btnVermelho=2;

int ledAzul=7;
int btnAzul=5;
  
int ledVerde=9;
int btnVerde=13;


void setup()
{
  pinMode(ledAzul,OUTPUT);
  pinMode(btnAzul,INPUT);
  
  pinMode(ledVermelho,OUTPUT);
  pinMode(btnVermelho,INPUT);
  
  pinMode(ledVerde,OUTPUT);
  pinMode(btnVerde,INPUT);
}

void loop()
{
  int valVermelho = digitalRead(btnVermelho);
  if(valVermelho == HIGH) {
  digitalWrite(ledVermelho, LOW);
  }  
  else{
    digitalWrite(ledVermelho, HIGH);
  }
  
  int valAzul = digitalRead(btnAzul)
    if(valAzul == HIGH){
    digitalWrite(ledAzul, LOW);  
  }
  else{
    digitalWrite(ledAzul,HIGH );
      
  }
       
   int valVerde = digitalRead(btnVerde);
    if(valVerde == HIGH){
    digitalWrite(ledVerde, LOW);
    
  }
  else{
    digitalWrite(ledVerde, HIGH);
    
  }
  
}