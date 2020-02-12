#include <iostream>

using namespace std;

int main() {

  // note we need a termination character '\0'
  char isAString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char isNotAString[5] = {'H', 'e', 'l', 'l', 'o'};
  cout << isAString << endl;
  cout << isNotAString << endl << endl;

  // alternate method is to initialize with a string literal
  char isAnotherString[6] = "Hello";
  char isYetAnotherString[] = "Array size is inferred";
  cout << isAnotherString << endl;
  cout << isYetAnotherString << endl << endl;
  
  // can also use the string class
  string myString = "Hello!";
  cout << myString << endl;
  return 0;
}
