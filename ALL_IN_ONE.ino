/* GI, SHIFTER, DRS, AUTO-SHIFT, SERVO, RPM DISPLAY 
 *  ALL ARE HERE
*/
#include <Servo.h>

Servo obj;
int val;
int val1;
int upbut = 23;
int dowbut = 24;
float m_17 = 2;
float rpm ;
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
float ledval, led1 = 3,led2 = 4,led3 = 5,led4 = 6; 
int drsbut = 22, actuator = 23; 
double millfn1,millfn2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode( m_17 , INPUT );
pinMode(upbut , INPUT);
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
pinMode( led1 , OUTPUT );
pinMode( led2 , OUTPUT );
pinMode( led3 , OUTPUT );
pinMode( led4 , OUTPUT );
pinMode(drsbut , INPUT);
pinMode(actuator , OUTPUT);
obj.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

 //Upshift
if (digitalRead(upbut) == HIGH)
{
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20); 
}
//Downshift
if (digitalRead(dowbut) == HIGH)
{
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
}
//GI
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
 
//Auto-upshift
rpm = 60 * analogRead(m_17); //https://www.aqua-calc.com/convert/frequency/hertz
if (rpm >= 5000 && rpm <= 5300)
{
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20); 
}
if (rpm >= 5200 && rpm <= 5500)
{
  if (digitalRead(gi1) == HIGH)
 { 
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 } 
}
if (rpm >= 5400 && rpm <= 5700)
{
  if (digitalRead(gi2) == HIGH)
 { 
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 } 
}
if (rpm >= 5600 && rpm <= 5900)
{
  if (digitalRead(gi3) == HIGH)
 { 
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 } 
}
if (rpm >= 5800 && rpm <= 6000)
{
  if (digitalRead(gi4) == HIGH)
 { 
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 } 
}
if (rpm >= 6000 && rpm <= 6100)
{
  if (digitalRead(gi5) == HIGH)
 { 
  //Upshift
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , LOW);
  delay(20);
 } 
}
//Downshift
if (digitalRead(dowbut) == HIGH)
{
  digitalWrite(m_22 , LOW);
  delay(20);
  digitalWrite(numatic , HIGH);
  delay(20);
}
//GI
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
//RPM-Display
ledval=analogRead(m_17);
if (ledval >= 0 || ledval <= 32)
{
  analogWrite(led1 , ledval);
}
if (ledval >= 33 || ledval <= 64)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , ledval);
}
if (ledval >= 65 || ledval <= 96)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , ledval);
}
if (ledval >= 97 || ledval <= 127)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , ledval);
}
if (ledval >= 128 || ledval <= 159)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , 255);
  analogWrite(led5 , ledval);
}
if (ledval >= 160 || ledval <= 191)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , 255);
  analogWrite(led5 , 255);
  analogWrite(led6 , ledval);
}
if (ledval >= 192 || ledval <= 223)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , 255);
  analogWrite(led5 , 255);
  analogWrite(led6 , 255);
  analogWrite(led7 , ledval);
}
if (ledval >= 224 || ledval <= 255)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , 255);
  analogWrite(led5 , 255);
  analogWrite(led6 , 255);
  analogWrite(led7 , 255);
  analogWrite(led8 , ledval);
}
if (ledval >= 2 || ledval <= 255)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , 255);
  analogWrite(led5 , 255);
  analogWrite(led6 , 255);
  analogWrite(led7 , 255);
  analogWrite(led8 , 255);
  analogWrite(led9 , ledval);
}

//DRS
if (digitalRead(drsbut)==HIGH)
{
  digitalWrite(actuator , HIGH);
}
if (digitalRead(drsbut)==LOW)
{
  digitalWrite(actuator , LOW);
}
//Servo
val= analogRead(1);
val1=map(val,250,850,45,150);
if (val1>=45&&val1<=150)
{
obj.write(val1);
delay(15);
}
if (val1<=45&&val1>=150)
{
obj.detach();
}
else
{
  obj.attach(9);
}
}
