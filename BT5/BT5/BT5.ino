
void setup() {

    pinMode(A0,INPUT);
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}
int readA0 = 0;
void loop() {
  
    readA0 = analogRead(A0);
    Serial.println(readA0);

    digitalWrite(13,HIGH);
    delay(readA0);
    digitalWrite(13,LOW);
    delay(readA0);
}
