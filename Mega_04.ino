#include <Servo.h>
Servo myservo;  // create servo object to control a servo

int potpin = A0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
int val1;
int upshift= 8;
int pnum = 2;
int igcut = 3; 
int downshift = 4;
int pnum2= 5;
int DRS1 = 6;
int pnum3 = 7;
long unsigned previousm1 = 0;
int interval1 = 1000; // Delay for pnumeatic
long unsigned previousm2 = 0;
int interval2 = 1000;
long unsigned previousm3 = 0;
int interval3 = 1000;
long unsigned currentm1 =0;
int interval4 = 15;

void setup() {
    Serial.begin(9600);
 pinMode(upshift,INPUT_PULLUP);
  pinMode(pnum,OUTPUT);
  pinMode(igcut,OUTPUT);
  pinMode(downshift,INPUT_PULLUP);
  pinMode(pnum2,OUTPUT);
  pinMode(DRS1,INPUT_PULLUP);
  pinMode(pnum3, OUTPUT);
digitalWrite(8,0);
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
digitalWrite(6,0);
digitalWrite(7,1);
  myservo.attach(9);
}

void loop() {
    currentm1 = millis();
  if (digitalRead(8)==HIGH)    //Upshift
  {
    previousm1 = millis();
    Serial.println(previousm1);
    digitalWrite(igcut,0);
  }
  if ((millis() - previousm1) >= 25)
    { Serial.print("p:");
    Serial.println(previousm1);
    digitalWrite(pnum,0);
    }
  if ((millis() -previousm1) >= 50)
  {
         digitalWrite(igcut,1);
         digitalWrite(pnum,1);
  }
  if (digitalRead(4)==HIGH)   //Downshift
  { previousm2 = millis();
   digitalWrite(pnum2,0); 
  }
  if ((millis() -previousm2) >= 50) 
  digitalWrite(pnum2,1);

  if(digitalRead(DRS1) == HIGH)
  {
    digitalWrite(pnum3,0);
  }
  else{
    digitalWrite(pnum3,1);
  }
  Servo1();
}

void Servo1(){
    
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val, 250, 850, 45, 150);     // scale it to use it with the servo (value between 0 and 180)
  if(val1>=45&& val1<=150){
  myservo.write(val1);                  // sets the servo position according to the scaled value
  previousm3 = millis();
  }
  else if(val1<45)
  { val1=45;
    myservo.write(45);
  }
  else{
    val1=150;
    myservo.write(150);
  }
  if((millis()- previousm3) >= 1)
  {
  if(val1<=45 && val1>=150)
  {
    myservo.detach();
  }
    else
    myservo.attach(9);
    }
  
  
  Serial.print("Angle :");
  Serial.println(val1);
  Serial.println(val);
  // waits for the servo to get there
}

