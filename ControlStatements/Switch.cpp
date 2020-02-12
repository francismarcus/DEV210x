#include <iostream>

using namespace std;

int main() {
    
  // use switch as an alternative to if/else if/else statements, generally when
  // there are 5 or more.
  char response = 'y';
  switch (response) {
  case 'y':
    // block of code to execute if the value of response is 'y'.
    break;
  case 'Y':
    // block of code to execute if the value of response is 'Y'.
    break;
  case 'n':
    // block of code to execute if the value of response is 'n'.
    break;
  default:
    // block executes if none of the other cases are met (optional).
    break;
  }
  return 0;
}
