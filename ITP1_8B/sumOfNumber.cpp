#include <iostream>
#include <string>
using namespace std;

int main() {
  string inputNumber("");
  int sum(0);

  while(1) {
    sum = 0;
    getline(cin, inputNumber);

    for(string::iterator  itr = inputNumber.begin();
        itr != inputNumber.end(); ++itr) {
      sum += (*itr) - 0x30;
    }
    if( sum == 0 )
      break;
    cout << sum << endl;
  }
  return 0;
}

