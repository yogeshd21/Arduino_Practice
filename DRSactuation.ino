int drsbut = 22, actuator = 23; 
void setup() {
  // put your setup code here, to run once:
pinMode(drsbut , INPUT);
pinMode(actuator , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(drsbut)==HIGH)
{
  digitalWrite(actuator , HIGH);
}
if (digitalRead(drsbut)==LOW)
{
  digitalWrite(actuator , LOW);
}
}
