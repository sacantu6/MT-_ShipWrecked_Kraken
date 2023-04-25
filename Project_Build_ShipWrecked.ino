//A - Green - Water and Ship
#include <Servo.h>

Servo Myservo;
int pos = 0;
int servoDelay = 15;

Servo Myservo2;
int pos2 = 0;
int servoDelay2 = 75;

//LED1
const int LED1 = 2;
int LED1State = 0;

//LED2
const int LED2 = 4;
int LED2State = 0;

//CopTap
const int CopTPin = 8;
int CopTState2 = 0;

//CopTap2
const int CopT2Pin = 5;
int CopT2State = 0;


void setup() {
  pinMode(CopTPin, INPUT);
  pinMode(CopT2Pin, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Myservo.attach(6);
  Myservo2.attach(9);
  Serial.println("Part A Begin");
  Serial.begin(9600);
}

void loop() {
if (digitalRead(CopTPin) == HIGH) {
for(pos = 0; pos <= 170; pos = pos += 1) {
      Myservo.write(pos);
      delay(servoDelay);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      //Myservo2.write(130);
      //delay(2000);
    }
    for(pos = 170; pos >= 0; pos = pos -= 1) {
      Myservo.write(pos);
      delay(servoDelay);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      //Myservo2.write(90);
      //delay(2000);
}
   
if (digitalRead(CopT2Pin == HIGH)) {
  for(pos2 = 0; pos2 <= 85; pos2 = pos2 += 1) {
    Myservo2.write(pos2);
    delay(servoDelay2);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
  }
  for(pos2 = 85; pos2 >= 0; pos2 = pos2 -= 1) {
    Myservo2.write(pos2);
    delay(servoDelay2);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);

  }
}
}
