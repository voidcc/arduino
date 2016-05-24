#define PIN_IN 4
#define PIN_OUT 2

void setup() {
  Serial.begin(9600);
  pinMode(PIN_IN, INPUT);
  pinMode(PIN_OUT, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int t = digitalRead(PIN_IN);
  //Serial.println(digitalRead(PIN));
  if(t == HIGH){
    digitalWrite(13, HIGH);
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(13, LOW);
    digitalWrite(2, LOW);
  }
  delay(500);
}
