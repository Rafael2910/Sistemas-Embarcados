
int led = 8;
int btn = 2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn,INPUT);
}

void loop()
{
 int val = digitalRead(btn);
   if(val == HIGH) {
   digitalWrite(led,LOW);
}
  else{
    
    digitalWrite(led,HIGH);
    
  }
}