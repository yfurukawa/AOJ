#include <iostream>
using namespace std;

bool isInWidth(int w, int x, int r);
bool isInHight(int h, int y, int r);

int main(int argc, char* argv[]) {
  int w, h, x, y, r;

  cin >> w >> h >> x >> y >> r;

  if( isInWidth(w, x ,r) && isInHight(h, y, r) ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}

bool isInWidth(int w, int x, int r) {
  if( (x - r >= 0) && (x + r <= w) ) {
    return true;
  }
  else {
    return false;
  }
}

bool isInHight(int h, int y, int r) {
  if( (y - r >= 0) && (y + r <= h) ) {
    return true;
  }
  else {
    return false;
  }
}

