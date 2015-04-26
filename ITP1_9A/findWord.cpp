#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

typedef list<string> listedWord;

void wakachi(listedWord words, string& line);
void convertTab2Space(string* line);

int main( int argc, char* argv[] ) {
  string word("");
  string line("");
  listedWord words;
  int count(0);

  cin >> word;

  while(1) {
    cin >> line;
    if( line == "END_OF_TEXT" )
      break;
    wakachi(words, line);
  }

  for(listedWord::iterator itr = words.begin(); itr != words.end(); ++itr) {
    cout << *itr << endl;
    if( *itr == word )
      ++count;
  }

  cout << count << endl;
  
  return 0;
}

void wakachi(listedWord words, string& line) {
  convertTab2Space(&line);
  
  int pos(0);

  while(1) {
    pos = line.find(' ', 0);
    if( pos == string::npos ) {
      words.push_back(line);
      break;
    }
    words.push_back(line.substr(0, pos));
  }
}

void convertTab2Space(string* line) {
  for(string::iterator itr = line->begin(); itr != line->end(); ++itr) {
    if( *itr == '\t' )
      *itr = ' ';
  }
}
