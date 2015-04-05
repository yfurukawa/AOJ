#include <iostream>
#include <string>
using namespace std;

int main(){
  int n(0), b(0), f(0), r(0), v(0);
  int house[4][3][10];
  string delimiter("####################");

  for(int b = 0; b < 4; ++b){
    for(int f = 0; f < 3; ++f) {
      for(int r = 0; r < 10; ++r ){
        house[b][f][r] = 0;
      }
    }
  }

  cin >> n;

  for( int i = 0; i < n; ++i ){
     cin >> b >> f >> r >> v;
     house[b-1][f-1][r-1] += v;
  }

  for(int b = 0; b < 4; ++b){
    for(int f = 0; f < 3; ++f) {
      for(int r = 0; r < 10; ++r ){
        cout << " " << house[b][f][r];
      }
      cout << endl;
    }
    if( b < 3 )
       cout << delimiter << endl;
  }

  return 0;
}

