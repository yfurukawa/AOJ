#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main( int argc, char* argv[] ) {
  string word("");
  string line("");
  int count(0);

  cin >> word;
  transform(word.begin(), word.end(), word.begin(), ::tolower);

  while(1) {
    cin >> line;
    if( line == "END_OF_TEXT" )
      break;
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    if( line == word )
      ++count;
  }

  cout << count << endl;
  
  return 0;
}

