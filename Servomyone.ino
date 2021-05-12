#include <Servo.h>

Servo obj;
int val;
int val1;
void setup() {
  // put your setup code here, to run once:
obj.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly
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
