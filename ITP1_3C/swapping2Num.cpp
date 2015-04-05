#include <iostream>

using namespace std;

int main() {
  int x(0);
  int y(0);

  while(1) {
    cin >> x >> y;

    if( x == 0 && y == 0 ) {
      return 0;
    }
    else if( x > y ) {
      swap(x, y);
    }

    cout << x << " " << y << endl;
  }
  return 0;
}

