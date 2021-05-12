float m_17 = 2;
float ledval, led1 = 3,led2 = 4,led3 = 5,led4 = 6; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode( m_17 , INPUT );
pinMode( led1 , OUTPUT );
pinMode( led2 , OUTPUT );
pinMode( led3 , OUTPUT );
pinMode( led4 , OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
ledval=analogRead(m_17);
if (ledval >= 0 || ledval <= 64)
{
  analogWrite(led1 , ledval);
}
if (ledval >= 65 || ledval <= 127)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , ledval);
}
if (ledval >= 128 || ledval <= 191)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , ledval);
}
if (ledval >= 192 || ledval <= 255)
{
  analogWrite(led1 , 255);
  analogWrite(led2 , 255);
  analogWrite(led3 , 255);
  analogWrite(led4 , ledval);
}
}
