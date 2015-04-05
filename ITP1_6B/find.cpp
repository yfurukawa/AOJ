#include <iostream>
#include <string>
using namespace std;

void output( const bool *card, const string type);

int main(){
  int n(0);
  bool s[13], h[13], c[13], d[13];
  char cardType;
  int number(0);

  for( int i = 0; i < 13; ++i ){
    s[i] = false;
    h[i] = false;
    c[i] = false;
    d[i] = false;
  }

  cin >> n;

  for( int i = 0; i < n; ++i ){
    cin >> cardType >> number;

    switch( cardType ){
      case 'S':
        s[number-1] = true;
        break;
      case 'H':
        h[number-1] = true;
        break;
      case 'C':
        c[number-1] = true;
        break;
      case 'D':
        d[number-1] = true;
        break;
      default:
        break;
    }
  }

  output( s, "S ");
  output( h, "H ");
  output( c, "C ");
  output( d, "D ");

  return 0;
}

void output( const bool *card, const string type){
  for( int i = 0; i < 13; ++i){
    if( !*(card+i) )
      cout << type << i+1 << endl;
  }
}
