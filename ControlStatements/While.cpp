#include <iostream>

using namespace std;

// simple menu using a while loop
int main() {
  string response;
  cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
  cin >> response;
  while (response != "Quit") {
    // code to execute if Quit is not entered
    cout << "Enter menu choice " << endl << "More" << endl << "Quit" << endl;
    cin >> response;
  }
  return 0;
}
