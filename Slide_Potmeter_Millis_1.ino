unsigned long int milli_time;    //variable to hold the time

int potPin = A0;
int potVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  milli_time = millis();
  potVal = analogRead(potPin);
  Serial.print("DATA,TIME,");
  Serial.print(milli_time);
  Serial.print(",");
  Serial.println(potVal);
  delay (1000);
}
