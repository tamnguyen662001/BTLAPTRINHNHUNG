int clockpin = 13;
int datapin = 12;
int latchpin = 8;
const int X[10]
{
  0b11000000,//1->9
  0b11111001,
  0b10100100,
  0b10110000,
  0b10011001,
  0b10010010,
  0b10000010,
  0b10000000,
  0b10010000,
  };
void setup() {
  pinMode(clockpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(latchpin, OUTPUT);
}

void loop() {
  static int i = 0;

 digitalWrite(latchpin,LOW);
 shiftOut(datapin,clockpin,MSBFIRST,X[i] );
 digitalWrite(latchpin, HIGH);
  i = (i+1) % 10;
  delay(350);
}
