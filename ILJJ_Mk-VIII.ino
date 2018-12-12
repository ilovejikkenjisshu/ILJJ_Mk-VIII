#include "defines.h"

bool flag;

void setup() {
  pinMode(_F2,    OUTPUT);
  pinMode(_F1,    OUTPUT);
  pinMode(_F0,    OUTPUT);
  pinMode(_Cout,  INPUT);
  pinMode(_Cin,   OUTPUT);
  pinMode(_S1,    INPUT);
  pinMode(_S0,    INPUT);
  pinMode(_A1,    OUTPUT);
  pinMode(_A0,    OUTPUT);
  pinMode(_B1,    OUTPUT);
  pinMode(_B0,    OUTPUT);

  Serial.begin(57600);
  flag = false;
}

void loop() {
  if (!flag) {
    Serial.print("To start tests, please enter: ");
    Serial.flush();
  }
  if (Serial.available()) {
    while (Serial.read() != -1);
    Serial.println("Starting tests...");

    tester("- XOR test", xor_test);
    tester("- XNOR test", xnor_test);
    tester("- AND test", and_test);
    tester("- OR test", or_test);
    tester("- Adder test", adder_test);
    /*
     * tester("- XOR test", loopTester(XOR));
     * tester("- XNOR test", loopTester(XNOR));
     * tester("- AND test", loopTester(AND));
     * tester("- OR test", loopTester(OR));
     * tester("- Adder test", loopTester(ADD));
     * tester("- Sub test", loopTester(SUB));
     */
  }
}
