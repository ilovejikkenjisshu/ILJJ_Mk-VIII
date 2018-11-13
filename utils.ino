void tester(const char *msg, int (*func)()) {
    Serial.println(msg);
    if (!func()) Serial.println("==> OK");
    else Serial.println("==> NG");
}


void wait() {
    delay(10);
}
