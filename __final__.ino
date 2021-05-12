// UV SENSOR SCAN
#include <Servo.h>
int trigPin= 5;
int echoPin=4;
float ultra_distance[90]= {0};
float ultra_distance_main[90]= {0};
int angle[91]={0};


Servo my_servo;  // create servo object to control a servo

int measure_distance() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  return distance;
}

// IR SENSOR
int irObstaclePin1 = 0;  // This is our input pin
int irObstaclePin2 = 2;  // This is our input pin
int Obstacle1 = HIGH;  // HIGH MEANS NO OBSTACLE
int Obstacle2 = HIGH;  // HIGH MEANS NO OBSTACLE
int count1=0, count2=0,dir;
int inside=0,outside=0;


void setup() {
 // UV SENSOR SCAN
  
  my_servo.attach(12);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  digitalWrite(trigPin,LOW);
  digitalWrite(echoPin,LOW);
  Serial.begin(9600);

// IR SENSOR:
pinMode(irObstaclePin1, INPUT);
pinMode(irObstaclePin2, INPUT);
 Serial.begin(115200);  
}

void loop() 
{
 
 Obstacle1 = digitalRead(irObstaclePin1);
 Obstacle2 = digitalRead(irObstaclePin2);
 if (Obstacle1 == LOW  || Obstacle2 == LOW)
 {
   Serial.println("OBSTACLE!!, OBSTACLE!!"); 
   uv();
 }
ir(); 
}


void ir() 
{
  count1=0, count2=0 ;
  
 Obstacle1 = digitalRead(irObstaclePin1);
 if (Obstacle1 == LOW)
 {
   Serial.println("OBSTACLE!!, OBSTACLE!!"); 
   count1++; 
   delay(5000);
 }
 Obstacle2 = digitalRead(irObstaclePin2);
 if (Obstacle2 == LOW)
 {
   Serial.println("OBSTACLE!!, OBSTACLE!!"); 
   count2++;
   delay(5000); 
 }
 
// else
// {
//   Serial.println("clear");
// }


 dir=count1-count2;
if (dir > 0)
{
  Serial.println("Entering Region");
  inside++;
  outside--;
}

 if (dir < 0)
{
  Serial.println("Exiting Region");
  outside++;
  inside--;
}

Serial.println("Inside the region");
Serial.println(inside);
Serial.println("Outside the region");
Serial.println(outside);


delay(500);

}

void uv()
{
   my_servo.write(0);
  delay(600);
  int j=0;
  int index=-2;

  for (int i=0,j=0;i<=180;i+=5,j++)
  {
    my_servo.write(i);
    delay(50);
    angle[j]= i;
    ultra_distance_main[j]= measure_distance();
    delay(1000);
  }


  for (int i=0;i<=36;i++)
  {
    Serial.print( ultra_distance_main[i]-ultra_distance[i]);
    Serial.print("\t");
    if(i%6==0){
      Serial.print("\n");
    }
  }

  for (int i=0;i<=36;i++)
  {
    int check= ultra_distance_main[i]-ultra_distance[i];
    if (check<-5|| check>5)       // moved 
    {
      Serial.print("Animal moved away or towards from sensor module");
      int distance_animal=ultra_distance[j];                                ////////////////////////////////////
      int angle_animal=angle[i];
      
    }
  }


  for(int i=0;i<=36;i++)
{

 ultra_distance[i]=ultra_distance_main[i];

}

  
}

