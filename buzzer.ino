#define BUZZER 7
// 1 for buzz 2 for none
int serialData = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    serialData = Serial.parseInt();
    Serial.println(serialData);
  }
  if(serialData == 1){
  tone(BUZZER, 200);
  }
  else if (serialData == 2)
  {
    noTone(BUZZER);
  }
}
