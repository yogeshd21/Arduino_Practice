unsigned long int dly = 0,dly1=0,i=0;
int led = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  i = millis();
 // i=dly;
  Serial.println(dly);
  while(millis()<(i+3000))
{
  digitalWrite(led,HIGH);
  
}
/* dly1 = millis();
 i=dly1;
  while(dly1<(i+10))
{*/
  digitalWrite(led,LOW);
  i = millis();
 // i=dly;
  Serial.println(dly);
  while(millis()<(i+1000))
{
  digitalWrite(led,LOW);
  
}
}
/* i++;
}


//delay(1000);

//digitalWrite(led,LOW);
//while(millis()<dly+i)
//{
 // continue;
//}

//delay(2000);

}*/
