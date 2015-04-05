#include <iostream>
#include <string>
using namespace std;

int main(){
  int h(0);
  int w(0);
  string topLine("");
  string midLine("");

  while(1){
    cin >> h >> w;
    if( h == 0 && w == 0)
      break;

    topLine.assign( w, '#' );
    midLine.assign( w - 2, '.');

    cout << topLine << endl;
    for(int i = 0; i < h - 2; ++i)
      cout << "#" << midLine << "#" << endl;
    cout << topLine << endl;
    cout << endl;
  }
  return 0;
}

