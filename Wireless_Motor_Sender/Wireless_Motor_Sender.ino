int switchState = 0;

void setup(){
  Serial.begin(9600);
  pinMode(3,INPUT);
}
void loop(){
  switchState = digitalRead(3);
  if(switchState == HIGH){
    Serial.write(switchState);
  }
  else{
    Serial.write(switchState);
  }
  delay(200);
}
