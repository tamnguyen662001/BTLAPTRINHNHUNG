void setup() {
   pinMode(13,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(7,OUTPUT);

}

void loop() {
    digitalWrite(7,LOW);
  int a, b, c, d;
  for (a = 0; a < 2;a++)
  {
    for(b = 0; b < 2;b++)
    {
      for(c = 0; c < 2;c++)
      {
        for (d = 0; d <2; d++)
        {
          digitalWrite(10,d);
          digitalWrite(11,c);
          digitalWrite(12,b);
          digitalWrite(13,a);
          delay(350);
          }
        }
     }
    }
    digitalWrite(7,HIGH);
    delay(350);
}
