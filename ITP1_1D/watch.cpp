#include <iostream>
using namespace std;

int main() {
  int inputSeconds(0);
  int hour(0);
  int minute(0);
  int second(0);

  cin >> inputSeconds;

  hour = inputSeconds / 3600;
  minute = (inputSeconds - hour*3600)/60;
  second = (inputSeconds - hour*3600 - minute*60);

  cout << hour << ":" << minute << ":" << second << endl;

  return 0;
}

