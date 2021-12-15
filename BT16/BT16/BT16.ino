#include <Servo.h>
Servo s;
Servo s1;
int pos = 0;
void setup() {
s.attach(9);
s1.attach(13);
}

void loop() {
  for(pos = 0; pos <= 180;pos++)
  {
    s.write(pos);
    s1.write(pos);
    delay(10);
    }
    for (pos =180;pos>=0;pos--)
   {
    s.write(pos);
    s1.write(pos);
    delay(10);
    }

}
