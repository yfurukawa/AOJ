#include <iostream>
#include <string>
using namespace std;

int main(){
  int h(0);
  int w(0);
  string line("");

  while(1){
    cin >> h >> w;
    if( h == 0 && w == 0)
      break;

    line.assign( w, '#' );

    for(int i = 0; i < h; ++i)
      cout << line << endl;

    cout << endl;
  }

  return 0;
}

