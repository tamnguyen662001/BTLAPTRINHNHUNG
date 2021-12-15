// khai bao chan tin hieu motor A
int enA = 8;int in1 = 7;int in2 = 6;
// khai bao chan tin hieu motor B
int enB = 3;int in3 = 5;int in4 = 4;
int i;

void setup() {
  pinMode(enA,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}
void runmotor()
{
  // tang toc
 for (i = 0;i<=255;i++)
 {
  digitalWrite(in3,1);
  digitalWrite(in1,1);
  digitalWrite(in4,0);
  digitalWrite(in2,0);
  analogWrite(enB,i);
  analogWrite(enA,i);
  delay(100);
  } 
  // giam toc
  for (i = 255;i>=0;i--)
 {
  digitalWrite(in3,1);
  digitalWrite(in1,1);
  digitalWrite(in4,0);
  digitalWrite(in2,0);
  analogWrite(enB,i);
  analogWrite(enA,i);
  delay(100);
  } 
 }
void loop() {
  runmotor();
  delay(1000);
}
