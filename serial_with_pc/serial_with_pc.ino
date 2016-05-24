#define PIN_OUT 2

int inByte = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_OUT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    inByte = Serial.read();
    if(inByte == '0'){
      digitalWrite(PIN_OUT, HIGH);
    }
    else{
      digitalWrite(PIN_OUT, LOW);
    }
  }
  delay(10);
}
