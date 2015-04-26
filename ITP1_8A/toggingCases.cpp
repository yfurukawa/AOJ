#include <iostream>
#include <string>
using namespace std;

int main() {
  string inLine("");
  string outLine("");
  getline(cin, inLine);

  for( string::iterator itr =  inLine.begin(); itr != inLine.end(); ++itr) {
    if( 'A' <= *itr && *itr <= 'Z' ) {
      outLine += *itr - ('A' - 'a');
    }
    else if( 'a' <= *itr && *itr <= 'z' ){
      outLine += *itr +('A' - 'a');
    }
    else {
      outLine += *itr;
    }
  }

  cout << outLine << endl;
  return 0;
}

