#include "defines.h"

void tester(const char *msg, int (*func)()) {
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
    Serial.println("[SET] (Cin, A1, A0, B1, B0) = (%b, %b, %b, %b, %b)", cin, a1, a0, b1, b0);
    digitalWrite(_Cin, cin);
    digitalWrite(_A1, a1);
    digitalWrite(_A0, a0);
    digitalWrite(_B1, b1);
    digitalWrite(_B0, b0);
}

void _checkOutput(bool cout, bool s1, bool s0) {
    bool flag = digitalRead(_Cout) == cout && digitalRead(_S1) == s1 && digitalRead(_S0) == s0;
    Serial.println("[%s] (Cout, S1, S0) = (%b, %b, %b)", flag ? "OK" : "NG", cout, s1, s0);
}
