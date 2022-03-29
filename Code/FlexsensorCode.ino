
const int flexPin = A0; //pin A0
const int flexPin1 = A1;
const int flexPin2 = A2;
const int flexPin3 = A3;
const int flexPin4 = A4;

//Variables:
int value; //save analog value
int value1;
int value2;
int value3;
int value4;
int angle = 0;//chanegs angle value based on flex sensor reading
int angle1 = 0;
int angle2 = 0;
int angle3 = 0;
int angle4 = 0;
#include <Servo.h>
Servo myservo;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;



void setup() {

  Serial.begin(9600);
  myservo.attach(9);
  myservo1.attach(10);
  myservo2.attach();
  myservo3.attach();
  myservo4.attach();
  

}

void loop() {
  
    value = analogRead(flexPin);               //flexpin
    angle = map(value, 755, 910, 0, 180);//Map value 0-1023 to 0-255 (PWM)
    Serial.print("sensor0: ");
    Serial.print(angle);
    myservo.write(angle);
    delay(40);

    //flexpin1
    value1 = analogRead(flexPin1);         //Read and save analog value from potentiometer
    //Serial.println(value);               //Print value
    angle1 = map(value1, 700, 800, 0, 180);//Map value 0-1023 to 0-255 (PWM)
    Serial.print("\t sensor1: ");
    Serial.print(angle1);
    myservo1.write(angle1);
    delay(40);

    //flexpin2
    value2 = analogRead(flexPin2);         //Read and save analog value from potentiometer
    //Serial.println(value);               //Print value
    angle2 = map(value2, 718, 865, 0, 180);//Map value 0-1023 to 0-255 (PWM)
    Serial.print("\t sensor2: ");
    Serial.print(angle2);
    myservo1.write(angle2);
    delay(40);

    //flexpin3
    value3 = analogRead(flexPin3);         //Read and save analog value from potentiometer
    //Serial.println(value);               //Print value
    angle3 = map(value3, 680, 800, 0, 180);//Map value 0-1023 to 0-255 (PWM)
    Serial.print("\t sensor3: ");
    Serial.print(angle3);
    myservo3.write(angle3);
    delay(40);

    //flexpin4
    value4 = analogRead(flexPin4);         //Read and save analog value from potentiometer
    //Serial.println(value);               //Print value
    angle4 = map(value4, 715, 880, 0, 180);//Map value 0-1023 to 0-255 (PWM)
    Serial.print("\t sensor4: ");
    Serial.println(angle4);
    myservo4.write(angle4);
    delay(40);
  }
