#define _F2     32
#define _F1     31
#define _F0     30
#define _Cout   34
#define _Cin    33
#define _S1     41
#define _S0     40
#define _A1     51
#define _A0     50
#define _B1     53
#define _B0     52


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
    }
}
