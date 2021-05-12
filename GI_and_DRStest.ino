int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int pin5 = 6;
int pin6 = 7;
int pin7 = 8;
int gi1  = A0 ;
int gi2  = A1 ;
int gi3  = A2 ;
int gi4  = A3 ;
int gi5  = A4 ;
int gi6  = A5 ; 
int drsbut = 9, actuator = 10; 
int m_22 = 11;
int numatic = 12;
int count=0;
int upbut = A0;
int downbut = A1;
int dyl,dvar;
void setup() {
  // put your setup code here, to run once:
pinMode(m_22 , OUTPUT);
pinMode(numatic , OUTPUT);
pinMode(pin1, OUTPUT);     
pinMode(pin2, OUTPUT);     
pinMode(pin3, OUTPUT);     
pinMode(pin4, OUTPUT);     
pinMode(pin5, OUTPUT);     
pinMode(pin6, OUTPUT);     
pinMode(pin7, OUTPUT);
pinMode(drsbut , INPUT);
pinMode(actuator , OUTPUT);
pinMode(upbut , INPUT);
pinMode(downbut , INPUT);
pinMode(gi1 , INPUT);
pinMode(gi2 , INPUT);
pinMode(gi3 , INPUT);
pinMode(gi4 , INPUT);
pinMode(gi5 , INPUT);
pinMode(gi6 , INPUT);
}

void loop() {
 dyl = millis();
  //dvar = dyl;
  digitalWrite(m_22,HIGH);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,LOW);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,HIGH);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,HIGH);
  }
//  dvar = dyl;
//delay(200);
  // put your main code here, to run repeatedly:


//GI
 if (digitalRead(gi1) == HIGH)
 {
  digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
 }
 else if (digitalRead(gi2) == HIGH)
 {
  digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
else if (digitalRead(gi3) == HIGH)
 {
  digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
else if (digitalRead(gi4) == HIGH)
 {
  digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
else if (digitalRead(gi5) == HIGH)
 {
  digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
else if (digitalRead(gi6) ==  HIGH)
 {
 digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
 else
 {
 digitalWrite(m_22,LOW);
  while(millis()<(dyl+100))
  {
    digitalWrite(numatic,HIGH);
  }
  //dvar = dyl;
//delay(100);
  digitalWrite(numatic,LOW);
  dyl = millis();
 while(millis()<(dyl+200))
 {
     digitalWrite(numatic,LOW);;
  }
 // dvar = dyl;
// delay(200);
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
 }
if (digitalRead(drsbut)==HIGH)
{
  digitalWrite(actuator , HIGH);
}
if (digitalRead(drsbut)==LOW)
{
  digitalWrite(actuator , LOW);
}
}
