#include <iostream>

using namespace std;

union numericUnion {
  int intValue;
  long longValue;
  double doubleValue;
};

int main() {
  numericUnion myUnion;
  
  // can only store one piece of data at a time, as demonstrated here.
  // useful for things like a part number where it may be a string or an int but
  // never both.
  myUnion.intValue = 3;
  cout << myUnion.intValue << endl;
  myUnion.doubleValue = 4.5;
  cout << myUnion.doubleValue << endl;
  cout << myUnion.intValue << endl;
  return 0;
}