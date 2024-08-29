int ledg = 13;
int ledr = 12;
int ledy = 11;
void setup(){
  pinMode(ledg,OUTPUT);
  pinMode(ledr,OUTPUT);
  pinMode(ledy,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int A= Serial.read();
  if(A=='x'){
    digitalWrite(ledg,HIGH);
    digitalWrite(ledr,HIGH);
    digitalWrite(ledy,HIGH);
  }
  if(A== 'y'){
    digitalWrite(ledg,LOW);
    digitalWrite(ledr,LOW);
    digitalWrite(ledy,LOW);
  }
  else if(A=='a'){
    digitalWrite(ledg,HIGH);
    digitalWrite(ledr,LOW);
    digitalWrite(ledy,LOW);
  }
  else if(A=='b'){
    digitalWrite(ledg,LOW);
    digitalWrite(ledr,HIGH);
    digitalWrite(ledy,HIGH);
  }
}
