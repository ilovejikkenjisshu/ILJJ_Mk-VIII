#include "defines.h"

void tester(const char msg[], int (*func)()) {
  Serial.println(msg);
  if (!func()) Serial.println("==> OK");
  else Serial.println("==> NG");
}

void wait() {
  delay(10);
}

void _setMode(bool f2, bool f1, bool f0) {
  digitalWrite(_F2, f2);
  digitalWrite(_F1, f1);
  digitalWrite(_F0, f0);
}

void _setInput(bool cin, bool a1, bool a0, bool b1, bool b0) {
  // Serial.println("[SET] (Cin, A1, A0, B1, B0) = (%b, %b, %b, %b, %b)", cin, a1, a0, b1, b0);
  /*
  Serial.print("[SET] (Cin, A1, A0, B1, B0) = (");
  Serial.print((int)cin,DEC);
  Serial.print(", ");
  Serial.print((int)a1,DEC);
  Serial.print(", ");
  Serial.print((int)a0,DEC);
  Serial.print(", ");
  Serial.print((int)b1,DEC);
  Serial.print(", ");
  Serial.print((int)b0,DEC);
  Serial.println(")");
  */
  digitalWrite(_Cin, cin);
  digitalWrite(_A1, a1);
  digitalWrite(_A0, a0);
  digitalWrite(_B1, b1);
  digitalWrite(_B0, b0);
}

bool _checkOutput(bool cout, bool s1, bool s0,int type) {
  bool flag;
  if(type == _ADD || type == _SUB) flag = digitalRead(_Cout) == cout && digitalRead(_S1) == s1 && digitalRead(_S0) == s0;
  else                             flag =                               digitalRead(_S1) == s1 && digitalRead(_S0) == s0;
  /*
  Serial.print("type: ");
  Serial.println(type,DEC);
  
  Serial.print("[");
  if(flag) {
  Serial.print("OK] (Cout, S1, S0) = (");
  }else{
  Serial.print("NG] (Cout, S1, S0) = (");
  }
  Serial.print((int)cout,DEC);
  Serial.print(", ");
  Serial.print((int)s1,DEC);
  Serial.print(", ");
  Serial.print((int)s0,DEC);
  Serial.println(")");

  Serial.print(" output: (");
  Serial.print((int)digitalRead(_Cout),DEC);
  Serial.print(", ");
  Serial.print((int)digitalRead(_S1),DEC);
  Serial.print(", ");
  Serial.print((int)digitalRead(_S0),DEC);
  Serial.println(")");
  */
  return flag;
}

int loopTester(int mode){
  int l,a,b,cin,o;
  _setMode(ext(mode,2), ext(mode,1), ext(mode,0));
  switch(mode){
      case _XOR : Serial.println("XOR");break;
      case _XNOR: Serial.println("XNOR");break;
      case _AND : Serial.println("AND");break;
      case _OR  : Serial.println("OR");break;
      case _ADD : Serial.println("ADD");break;
      case _SUB : Serial.println("SUB");break;
  }
  for(l = 0; l < 0x1F; l++){
    a = ext(l,3)*2 + ext(l,2);
    b = ext(l,1)*2 + ext(l,0);
    cin = ext(l,4);
    _setInput(ext(l,4),ext(l,3),ext(l,2),ext(l,1),ext(l,0));
    switch(mode){
      case _XOR : o =   a ^ b ;               break;
      case _XNOR: o = ~(a ^ b);               break;
      case _AND : o =   a & b ;               break;
      case _OR  : o =   a | b ;               break;
      case _ADD : o =   a + b + cin;          break;
      case _SUB : o =   a + (b ^ 0x3) + cin;  break;
      default   :                             return -1;
    }
    delay(100);
    if(_checkOutput(ext(o,2),ext(o,1),ext(o,0), mode)) return -1;
  }
  return 0;
}
