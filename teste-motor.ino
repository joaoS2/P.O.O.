int pushButton3 = 3;
int pushButton2 = 2;

void setup(){
  pinMode (3, INPUT);
  pinMode (2, INPUT);
  pinMode (5, INPUT);
  pinMode(pushButton3, INPUT_PULLUP);
  pinMode(pushButton2, INPUT_PULLUP);

}


void loop() {
  if (digitalRead(pushButton3)){
    analogWrite(5, 100);
    delay(500);
    analogWrite(5, 150);
    delay(500);
    analogWrite(5, 200);
    delay(500);
    analogWrite(5, 250);
    delay(500);
    analogWrite(5, 300);
    delay(500);
    analogWrite(5, 360);
    delay(500);
  }
  else if (digitalRead(pushButton2)){
    analogWrite(5, 360);
    delay(500);
    analogWrite(5, 300);
    delay(500);
    analogWrite(5, 250);
    delay(500);
    analogWrite(5, 200);
    delay(500);
    analogWrite(5, 150);
    delay(500);  
    analogWrite(5, 100);
    delay(500);
    
    
  }
}