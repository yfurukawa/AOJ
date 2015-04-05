#include <iostream>
using namespace std;

int main(){
  int n(0), x(0);
  int count(0);

  while(1){
    count = 0;
    cin >> n >> x;

    if( n == 0 && x == 0 )
      break;

    for(int i = 1; i <= n-2; ++i){
      for(int j = 2; j <= n-1; ++j) {
        for(int k = 3; k <= n; ++k) {
          if( (x == i + j + k) && ( i != j && j != k && k != i )
              && ( i < j && j < k && i < k) ){ 
            ++count;
          }
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}

