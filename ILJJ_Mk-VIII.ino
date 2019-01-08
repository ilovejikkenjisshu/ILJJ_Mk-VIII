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

  Serial.begin(9600);
  flag = false;
}

void loop() {
  if (!flag) {
    // Serial.println("To start tests, please enter: ");
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
    tester("- XOR test", loopTester(_XOR));
    tester("- XNOR test", loopTester(_XNOR));
    tester("- AND test", loopTester(_AND));
    tester("- OR test", loopTester(_OR));
    tester("- Adder test", loopTester(_ADD));
    tester("- Sub test", loopTester(_SUB));
    */
  }
}
