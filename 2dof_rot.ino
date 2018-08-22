#include <Servo.h>

Servo myservo1;  // create servo object to control servo1 & servo2
Servo myservo2;


int theta1;
int theta2;
int T1;

void setup() {
  Serial.begin(9600);
  myservo1.attach(18);  // attaches the servo1 on pin A4 to the servo object
  myservo2.attach(17);  // attaches the servo2 on pin A3 to the servo object
  myservo1.write(170);
  myservo2.write(90);
  delay(1000);
}

void loop() {
  Serial.println("Link 1 Angle (10-180):");
  while (Serial.available() == 0) {}
  theta1 = Serial.parseInt();

  Serial.println("Link 2 Angle (12-175):");
  while (Serial.available() == 0) {}
  theta2 = Serial.parseInt();

  T1=180-theta1;

  delay(1000);
  Serial.print("Theta1= ");
  Serial.println(theta1);
  Serial.print("Theta2= ");
  Serial.println(theta2);
  Serial.println("###########################");
  myservo1.write(T1);
  myservo2.write(theta2);
  delay(500);

}


