#include "FunctionSum.h"
#include <iostream>

using namespace std;

int main() {
  cout << Sum(2, 5) << endl;
  cout << Sum(2, 5, 7) << endl;
  return 0;
}

int Sum(int a, int b) { return a + b; }

int Sum(int a, int b, int c) { return a + b + c; }

// Inline functions
inline void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
int main() {
  int a{5};
  int b{8};
  swap(a, b);

  // values are swapped
  cout << "a: " << a << " b: " << b << endl;
  return 0;
}

// StorageClassesAndScope
int main() {

    // static keyword - allocated when program starts, deallocated when program ends. Variable will retain its
    // value between calls to the function.

    // extern keyword - used to declare an object that is defined in another translation unit within the enclosing
    // scope but has an external linkage.

    // thread_local keyword - identifier is only accessible on the thread which it is created. Prevents sharing
    // of the identifier across multiple threads in same application. (C++ 11 standard)
  int total{0};
  for (int i = 0; i <= 10; i++) {
    total += i;
  }
  cout << "The sum of the numbers 1 to 10 is: " << total << endl;
  // this line will not compile as i is now out of scope.

  return 0;
}
