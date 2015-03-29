#include <iostream>
#include <string>
using namespace std;

int main() {
  int lhs(0), rhs(0);
  string result("a == b");
  cin >> lhs >> rhs;

  if( lhs == rhs ) {
  }
  else {
    result = (lhs > rhs) ? "a > b" : "a < b";
  }
  cout << result << endl;
  return 0;
}

