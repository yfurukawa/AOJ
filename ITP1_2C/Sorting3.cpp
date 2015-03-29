#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  int a[3];

  cin >> a[0] >> a[1] >> a[2];

  for(int i = 2; i >= 0; --i) {
    for(int j = 0; j < i; ++j) {
      if(a[j] > a[j+1]) {
        swap(a[j], a[j+1]);
      }
    }
  }

  cout << a[0] << " " << a[1] << " " << a[2] << endl;;

  return 0;
}

