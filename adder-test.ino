#include "defines.h"

int adder_test() {
  _setMode(HIGH, LOW, LOW);
  _setInput(LOW , LOW , LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _ADD)) return 1;
  _setInput(LOW , LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , LOW , HIGH , _ADD)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _ADD)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;

  _setInput(LOW , LOW , HIGH, LOW , LOW ); if(!_checkOutput(LOW , LOW , HIGH , _ADD)) return 1;
  _setInput(LOW , LOW , HIGH, LOW , HIGH); if(!_checkOutput(LOW , HIGH, LOW , _ADD)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, HIGH); if(!_checkOutput(HIGH, LOW , LOW , _ADD)) return 1;

  _setInput(LOW , HIGH, LOW , LOW , LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _ADD)) return 1;
  _setInput(LOW , HIGH, LOW , LOW , HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, HIGH); if(!_checkOutput(HIGH, LOW , HIGH , _ADD)) return 1;

  _setInput(LOW , HIGH, HIGH, LOW , LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(LOW , HIGH, HIGH, LOW , HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(HIGH, LOW , HIGH , _ADD)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(HIGH, HIGH, LOW  , _ADD)) return 1;
      
  _setInput(HIGH, LOW , LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , HIGH , _ADD)) return 1;
  _setInput(HIGH, LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , HIGH, LOW  , _ADD)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;

  _setInput(HIGH, LOW , HIGH, LOW , LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _ADD)) return 1;
  _setInput(HIGH, LOW , HIGH, LOW , HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, HIGH); if(!_checkOutput(HIGH, LOW , HIGH , _ADD)) return 1;

  _setInput(HIGH, HIGH, LOW , LOW , LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _ADD)) return 1;
  _setInput(HIGH, HIGH, LOW , LOW , HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, LOW ); if(!_checkOutput(HIGH, LOW , HIGH , _ADD)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, HIGH); if(!_checkOutput(HIGH, HIGH, LOW  , _ADD)) return 1;

  _setInput(HIGH, HIGH, HIGH, LOW , LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _ADD)) return 1;
  _setInput(HIGH, HIGH, HIGH, LOW , HIGH); if(!_checkOutput(HIGH, LOW , HIGH , _ADD)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(HIGH, HIGH, LOW  , _ADD)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(HIGH, HIGH, HIGH , _ADD)) return 1;

  // minus
  _setMode(HIGH, LOW, HIGH);   
  _setInput(LOW , LOW , LOW , LOW , LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
  _setInput(LOW , LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , HIGH, LOW  , _SUB)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , LOW , HIGH , _SUB)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, HIGH); if(!_checkOutput(LOW , LOW , LOW  , _SUB)) return 1;

  _setInput(LOW , LOW , HIGH, LOW , LOW ); if(!_checkOutput(HIGH, LOW , LOW , _SUB)) return 1;
  _setInput(LOW , LOW , HIGH, LOW , HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW , _SUB)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, HIGH); if(!_checkOutput(LOW , LOW , HIGH , _SUB)) return 1;

  _setInput(LOW , HIGH, LOW , LOW , LOW ); if(!_checkOutput(HIGH, LOW , HIGH , _SUB)) return 1;
  _setInput(LOW , HIGH, LOW , LOW , HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, HIGH); if(!_checkOutput(LOW , HIGH, LOW , _SUB)) return 1;

  _setInput(LOW , HIGH, HIGH, LOW , LOW ); if(!_checkOutput(HIGH, HIGH, LOW  , _SUB)) return 1;
  _setInput(LOW , HIGH, HIGH, LOW , HIGH); if(!_checkOutput(HIGH, LOW , HIGH , _SUB)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
      
  _setInput(HIGH, LOW , LOW , LOW , LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;
  _setInput(HIGH, LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _SUB)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, HIGH); if(!_checkOutput(LOW , LOW , HIGH , _SUB)) return 1;

  _setInput(HIGH, LOW , HIGH, LOW , LOW ); if(!_checkOutput(HIGH, LOW , HIGH , _SUB)) return 1;
  _setInput(HIGH, LOW , HIGH, LOW , HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, LOW ); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, HIGH); if(!_checkOutput(LOW , HIGH, LOW  , _SUB)) return 1;

  _setInput(HIGH, HIGH, LOW , LOW , LOW ); if(!_checkOutput(HIGH, HIGH, LOW  , _SUB)) return 1;
  _setInput(HIGH, HIGH, LOW , LOW , HIGH); if(!_checkOutput(HIGH, LOW , HIGH , _SUB)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, LOW ); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _SUB)) return 1;

  _setInput(HIGH, HIGH, HIGH, LOW , LOW ); if(!_checkOutput(HIGH, HIGH, HIGH , _SUB)) return 1;
  _setInput(HIGH, HIGH, HIGH, LOW , HIGH); if(!_checkOutput(HIGH, HIGH, LOW  , _SUB)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(HIGH, LOW , HIGH , _SUB)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(HIGH, LOW , LOW  , _SUB)) return 1;

  return 0;
}
