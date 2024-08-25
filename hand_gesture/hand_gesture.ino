int t=A0;
int a=3;
void setup(){
  pinMode(a,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int se=analogRead(t);
  Serial.println(se);
  if(se>100)
  {
    digitalWrite(a,HIGH);
  }
  else
  {
    digitalWrite(a,LOW);
  }
}
