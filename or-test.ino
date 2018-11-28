#include "defines.h"

int or_test() {
  _setMode(LOW, HIGH, HIGH);

  _setInput(LOW , LOW , LOW , LOW , LOW ); _checkOutput(LOW , LOW , LOW );
  _setInput(LOW , LOW , LOW , LOW , HIGH); _checkOutput(LOW , LOW , HIGH);
  _setInput(LOW , LOW , LOW , HIGH, LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(LOW , LOW , LOW , HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(LOW , LOW , HIGH, LOW , LOW ); _checkOutput(LOW , LOW , HIGH);
  _setInput(LOW , LOW , HIGH, LOW , HIGH); _checkOutput(LOW , LOW , HIGH);
  _setInput(LOW , LOW , HIGH, HIGH, LOW ); _checkOutput(LOW , HIGH, HIGH;
  _setInput(LOW , LOW , HIGH, HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(LOW , HIGH, LOW , LOW , LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(LOW , HIGH, LOW , LOW , HIGH); _checkOutput(LOW , HIGH, HIGH);
  _setInput(LOW , HIGH, LOW , HIGH, LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(LOW , HIGH, LOW , HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(LOW , HIGH, HIGH, LOW , LOW ); _checkOutput(LOW , HIGH, HIGH);
  _setInput(LOW , HIGH, HIGH, LOW , HIGH); _checkOutput(LOW , HIGH, HIGH);
  _setInput(LOW , HIGH, HIGH, HIGH, LOW ); _checkOutput(LOW , HIGH, HIGH);
  _setInput(LOW , HIGH, HIGH, HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(HIGH, LOW , LOW , LOW , LOW ); _checkOutput(LOW , LOW , LOW );
  _setInput(HIGH, LOW , LOW , LOW , HIGH); _checkOutput(LOW , LOW , HIGH);
  _setInput(HIGH, LOW , LOW , HIGH, LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(HIGH, LOW , LOW , HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(HIGH, LOW , HIGH, LOW , LOW ); _checkOutput(LOW , LOW , HIGH);
  _setInput(HIGH, LOW , HIGH, LOW , HIGH); _checkOutput(LOW , LOW , HIGH);
  _setInput(HIGH, LOW , HIGH, HIGH, LOW ); _checkOutput(LOW , HIGH, HIGH;
  _setInput(HIGH, LOW , HIGH, HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(HIGH, HIGH, LOW , LOW , LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(HIGH, HIGH, LOW , LOW , HIGH); _checkOutput(LOW , HIGH, HIGH);
  _setInput(HIGH, HIGH, LOW , HIGH, LOW ); _checkOutput(LOW , HIGH, LOW );
  _setInput(HIGH, HIGH, LOW , HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);

  _setInput(HIGH, HIGH, HIGH, LOW , LOW ); _checkOutput(LOW , HIGH, HIGH);
  _setInput(HIGH, HIGH, HIGH, LOW , HIGH); _checkOutput(LOW , HIGH, HIGH);
  _setInput(HIGH, HIGH, HIGH, HIGH, LOW ); _checkOutput(LOW , HIGH, HIGH);
  _setInput(HIGH, HIGH, HIGH, HIGH, HIGH); _checkOutput(LOW , HIGH, HIGH);
  
  return 0;
}
