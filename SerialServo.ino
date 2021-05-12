#include<Servo.h>
int deg;
int val;
Servo obj;
void setup() {
  // put your setup code here, to run once:
obj.attach(9);
Serial.begin(9600);
obj.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  val=Serial.parseInt();
  deg=int(val);
  delay(15);
}
obj.write(deg);

}
