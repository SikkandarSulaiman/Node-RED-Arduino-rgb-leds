void setup() {
  Serial.begin(115200);
  pinMode(2,1);
  pinMode(3,1);
  pinMode(4,1);
  pinMode(A3,1);
  pinMode(A1,0);
  analogWrite(A3,1024);
  Serial.println(analogRead(A1));
}

void loop() {
  if(Serial.available()){
    String recv = Serial.readStringUntil('\n');
    if(recv.substring(0,2)=="on")
      digitalWrite((recv.substring(2,4)).toInt(),1);
    else if(recv.substring(0,3)=="off")
      digitalWrite((recv.substring(3,5)).toInt(),0);
    else if(recv.substring(0,3)=="tog")
      digitalWrite((recv.substring(3,5)).toInt(),digitalRead((recv.substring(3,5)).toInt())?0:1);
    else if(recv.substring(0,3)=="pwm")
      analogWrite((recv.substring(3,5)).toInt(),(recv.substring(5,8)).toInt());
    delay(200);
    Serial.println(analogRead(A1));
    }
}
