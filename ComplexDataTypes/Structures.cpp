#include <iostream>
#include <string>

using namespace std;

// structs are user-defined types
struct coffeeBean {
  string name;
  string country;
  int strength;
};

int main() {
  coffeeBean myBean = {"Strata", "Columbia", 10};
  coffeeBean newBean;
  newBean.name = "Flora";
  newBean.country = "Mexico";
  newBean.strength = 9;
  
  cout << "Coffee bean: " + newBean.name + " is from " + newBean.country +
              " and rated a strength of " + to_string(newBean.strength)
       << endl;
  return 0;
}