const int black = 0;
const int red = 1;
const int green = 2;
const int blue = 3;
const int yellow = 4;
const int cyan = 5;
const int magenta = 6;
const int white = 7;


void setup() {
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(1,OUTPUT);
}

void loop() {
  for (int i = black; i<= white;i++)
  {
      display (i);delay(600);  
  }
}
void display(int color){
  switch(color){
    case black : digitalWrite(1,0);
                  digitalWrite(2,0);
                  digitalWrite(3,0);
                  break;
    case red : digitalWrite(1,0);
               digitalWrite(2,0);
               digitalWrite(3 ,1);
                  break;
    case green : digitalWrite(1,0);
               digitalWrite(2,1);
               digitalWrite(3 ,0);
                  break;
    case blue : digitalWrite(1,0);
               digitalWrite(2,1);
               digitalWrite(3 ,1);
                  break;
    case yellow : digitalWrite(1,1);
               digitalWrite(2,0);
               digitalWrite(3 ,0);
                  break;
    case cyan : digitalWrite(1,1);
               digitalWrite(2,0);
               digitalWrite(3 ,1);
                  break;
    case magenta : digitalWrite(1,1);
               digitalWrite(2,1);
               digitalWrite(3 ,0);
                  break;
    case white : digitalWrite(1,1);
               digitalWrite(2,1);
               digitalWrite(3 ,1);
                  break;
    
    }
    
}
