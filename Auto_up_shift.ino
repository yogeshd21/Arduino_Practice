float m_17 = 2;
float rpm ;
int dowbut = 24;
int m_22 = 25;
int numatic = 26;
int gi1  = A0 ;
int gi2  = A1 ;
int gi3  = A2 ;
int gi4  = A3 ;
int gi5  = A4 ;
int gi6  = A5 ; 
int pin1 = 27;
int pin2 = 28;
int pin3 = 29;
int pin4 = 30;
int pin5 = 31;
int pin6 = 32;
int pin7 = 33;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode( m_17 , INPUT );
pinMode(dowbut , INPUT);
pinMode(m_22 , OUTPUT);
pinMode(numatic , OUTPUT);
pinMode(gi1 , INPUT);
pinMode(gi2 , INPUT);
pinMode(gi3 , INPUT);
pinMode(gi4 , INPUT);
pinMode(gi5 , INPUT);
pinMode(gi6 , INPUT);
pinMode(pin1, OUTPUT);     
pinMode(pin2, OUTPUT);     
pinMode(pin3, OUTPUT);     
pinMode(pin4, OUTPUT);     
pinMode(pin5, OUTPUT);     
pinMode(pin6, OUTPUT);     
pinMode(pin7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
rpm = 60 * analogRead(m_17); //https://www.aqua-calc.com/convert/frequency/hertz
if (rpm >= 6000 && rpm <= 6100)
{
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
 
 if (digitalRead(gi1) == HIGH)
 {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
 }
 if (digitalRead(gi2) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
 if (digitalRead(gi3) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
 if (digitalRead(gi4) == HIGH)
 {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
 if (digitalRead(gi5) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
 if (digitalRead(gi6) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
}
if (digitalRead(dowbut) == HIGH)
{
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , HIGH);
  delay(20);
 if (digitalRead(gi1) == HIGH)
 {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
 }
 if (digitalRead(gi2) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
 if (digitalRead(gi3) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH); 
 }
 if (digitalRead(gi4) == HIGH)
 {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
 if (digitalRead(gi5) == HIGH)
 {
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
 }
 if (digitalRead(gi6) == HIGH)
 {
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
  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,LOW);
 }
}
}
