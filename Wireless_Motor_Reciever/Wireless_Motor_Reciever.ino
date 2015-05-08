int val;


void setup(){
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}
void loop(){
  if(Serial.available()>0){
    val = Serial.read();
  }
  if(val > 0){
    digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
  Serial.println(val);
}

