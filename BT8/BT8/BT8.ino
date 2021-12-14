byte ledPin[] = {1,2,3,4,5,6,7,8}; // mảng lưu vị trí các chân Digital mà các đèn LED sử dụng
byte pinCount; // pinCount dùng lưu tổng số chân LED
void setup() {
  pinCount = sizeof(ledPin);
  for (int i=0;i<pinCount;i++) {
    pinMode(ledPin[i],OUTPUT);  //các chân LED là OUTPUT
    digitalWrite(ledPin[i],LOW); //mặc định các đèn LEDtắt
  }
}
void TraiSangPhai()
{
   //Bật lần lượt các đèn LED
  for (int i=0; i < pinCount; i++) {
    digitalWrite(ledPin[i],HIGH); //Bật đèn
    delay(150); 
  }
}

void PhaiSangTrai()
{
   for (int i=pinCount; i >=0; i--) {
    digitalWrite(ledPin[i],HIGH); //Bật đèn
    delay(150); 
  }
}
void TatLed()
{ 
    for (int i=0;i<pinCount;i++) {
      digitalWrite(ledPin[i],LOW); //mặc định các đèn LEDtắt
    }
 }
 void TatLedLanLuot()
 {
    //Tắt lần lượt các đèn LED
    for (int i = 0;i < pinCount; i++) {
      digitalWrite(ledPin[i],LOW); // Tắt đèn
      delay(150); 
  }
}
void SangLedCongChan()
{
  TatLed();
  digitalWrite(ledPin[2],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[4],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[6],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[8],HIGH); //Bật đèn ở cổng chẵn
  delay(300);
  }

void SangLedCongLe()
{
  TatLed();
  digitalWrite(ledPin[1],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[3],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[5],HIGH); //Bật đèn ở cổng chẵn
  digitalWrite(ledPin[7],HIGH); //Bật đèn ở cổng chẵn
  delay(300);
  }
void NhapNhay()
{
  TatLed();
  for(int i = 0;i<=2;i++)
  {
    for (int i=0;i<pinCount;i++) {
      digitalWrite(ledPin[i],LOW); //mặc định các đèn LEDtắt
    }
      delay(300);
    for (int i=0;i<pinCount;i++) {
      digitalWrite(ledPin[i],HIGH); //mặc định các đèn LEDtắt
    }
     delay(300);
  }
  
}
void loop() {
 
  TraiSangPhai();

  TatLed();
  
  PhaiSangTrai();

  SangLedCongChan();

  SangLedCongLe();
  
  NhapNhay();
}

 
   
   
  

  
