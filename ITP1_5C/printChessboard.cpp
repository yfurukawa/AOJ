#include <iostream>
#include <string>
using namespace std;

int main(){
  int h(0);
  int w(0);
  string pattern("");

  for(int i = 0; i < 300 * 2; i += 2){
    pattern += "#.";
  }

  while(1) {
    cin >> h >> w;
    if( h == 0 && w == 0 )
      break;

    for(int i = 0; i < h; ++i)
      cout << pattern.substr(i, w) << endl;
    cout << endl;
  }
  return 0;
}

