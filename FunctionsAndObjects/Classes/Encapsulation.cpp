#include "Encapsulation.h"
#include <iostream>
using namespace std;

int main() {

  Encapsulation rect{3, 3};
  int theArea{rect.get_area()};
  cout << theArea << endl;
  rect.resize(5, 32);
  cout << rect.get_area() << endl;
  Encapsulation defaultRect{};
  cout << "Width: " << defaultRect.get_width()
       << " Height: " << defaultRect.get_height() << endl;
  cout << "Area of default rectangle: " << defaultRect.get_area() << endl;
  return 0;
}