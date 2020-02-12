#include <iostream>
using namespace std;

int main() {

  // assigning a cast through type
  int myInt = 12;
  long myLong;
  myLong = myInt;
  cout << myLong << endl;

  // can also use these versions
  long anotherLong = (long)myInt;
  long yetAnotherLong = long(myInt);
  long andAnotherLong = static_cast<long>(myInt);
  cout << anotherLong << " " << yetAnotherLong << " " << andAnotherLong << endl;
  return 0;
}