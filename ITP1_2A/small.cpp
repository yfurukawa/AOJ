#include <iostream>
using namespace std;

int main() {
  int lhs(0), rhs(0);

  cin >> lhs >> rhs;

  if( lhs < rhs ) {
    cout << "a < b" << endl;
    return 0;
  }
  else if( lhs == rhs ) {
    cout << "a == b" << endl;
    return 0;
  }
  else {
    cout << "a > b" << endl;
    return 0;
  }
}

