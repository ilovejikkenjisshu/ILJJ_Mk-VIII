#include "defines.h"

int and_test() {
  _setMode(LOW, HIGH, LOW);
  
  _setInput(LOW , LOW , LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , LOW , LOW , HIGH, HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;

  _setInput(LOW , LOW , HIGH, LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , LOW , HIGH, LOW , HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , LOW , HIGH, HIGH, HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;

  _setInput(LOW , HIGH, LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , HIGH, LOW , LOW , HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;
  _setInput(LOW , HIGH, LOW , HIGH, HIGH); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;

  _setInput(LOW , HIGH, HIGH, LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(LOW , HIGH, HIGH, LOW , HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;
  _setInput(LOW , HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _AND)) return 1;
      
  _setInput(HIGH, LOW , LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, LOW , LOW , LOW , HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, LOW , LOW , HIGH, HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;

  _setInput(HIGH, LOW , HIGH, LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, LOW , HIGH, LOW , HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, LOW , HIGH, HIGH, HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;

  _setInput(HIGH, HIGH, LOW , LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, HIGH, LOW , LOW , HIGH); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;
  _setInput(HIGH, HIGH, LOW , HIGH, HIGH); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;

  _setInput(HIGH, HIGH, HIGH, LOW , LOW ); if(!_checkOutput(LOW , LOW , LOW  , _AND)) return 1;
  _setInput(HIGH, HIGH, HIGH, LOW , HIGH); if(!_checkOutput(LOW , LOW , HIGH , _AND)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, LOW ); if(!_checkOutput(LOW , HIGH, LOW  , _AND)) return 1;
  _setInput(HIGH, HIGH, HIGH, HIGH, HIGH); if(!_checkOutput(LOW , HIGH, HIGH , _AND)) return 1;
  
  return 0;
}
