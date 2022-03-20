#include <iostream>
using namespace std;

int main() {
  int bottles = 100;
  string temp = "";
  cin >> bottles;
  for (int b = bottles; b > 0; b--) {
    temp = "bottles";
    if (b == 1) {
      temp = "bottle";
    }
    cout << b << " " << temp << " of healthy pop on the wall, take one down and pass it around. " << b - 1 << " bottles of healthy pop on the wall.\n";
  }
  cout << "GLUGLUGGLUG...\n";
  cout << "Ahhh...";
}
