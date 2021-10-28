#define shcp_hang 13
#define ds_hang 12

#define shcp_cot 3
#define ds_cot 4

#define stcp 11

void setup() {
  pinMode(shcp_hang, OUTPUT);
  
  pinMode(ds_hang, OUTPUT);
  
  pinMode(shcp_cot, OUTPUT);
  
  pinMode(ds_cot, OUTPUT);
  

}

void loop() {
  digitalWrite(stcp,0);
  shiftOut(ds_hang,shcp_hang,MSBFIRST,B00000111);
  shiftOut(ds_cot,shcp_cot,MSBFIRST,B11111000);
  digitalWrite(stcp,1);

}
