#include <Servo.h>
Servo myservo;  


int inp5 = 5;
int val;    

void setup() {
  pinMode(inp5, INPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(inp5)){
    Serial.println("inp5 = on");
    delay(1000);
    val = 90; 
  }else{
    val = 0; 
  }
      
  //val = map(val, 0, 1023, 0, 180);    
  myservo.write(val);                
  delay(15);       
}
