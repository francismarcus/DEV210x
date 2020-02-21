#include "CreatingClasses.h"
#include <iostream>

using namespace std;

int main() {
  CreatingClasses outer;
  CreatingClasses inner;
  outer.m_height = 10;
  outer.m_width = 10;
  inner.m_height = 5;
  inner.m_width = 5;
  cout << "Outer height: " << outer.m_height
       << " Outer width: " << outer.m_width << endl;
  cout << "Inner height: " << inner.m_height
       << " Inner width: " << inner.m_width << endl;
  return 0;
}