#include <iostream>
#include <string>

using namespace std;

bool isCandidate(const string& allString, const string& firstCahractor);
bool isInclude(const string& allString, const string& word);
int rotateString(string* allString, const string& word);

int main( int argc, char* argv[] ) {
  string s("");
  string p("");
  string result("No");
  int count(0);
  cin >> s;
  cin >> p;

  while( isCandidate(s, p) ) {
    if( isInclude(s, p) ){
      result = "Yes";
      break;
    }
    else {
      count += rotateString(&s, p);
      if( count > s.size() )
        break;
    }
  }
  cout << result << endl;

  return 0;
}

bool isCandidate(const string& allString, const string& firstCharactor) {
  return allString.find(firstCharactor[0], 0) != string::npos;
}

bool isInclude(const string& allString, const string& word) {
  return allString.find(word, 0) != string::npos;
}

int rotateString(string* allString, const string& word) {
  int pos = allString->find(word[0], 0);
  if(pos == 0)
    pos = allString->find(word[0], 1);
  if( pos == string::npos)
    return allString->size() + 1;
  string rotatedString("");
  rotatedString = allString->substr(pos);
  rotatedString = rotatedString + allString->substr(0, pos);
  *allString = rotatedString;
  return pos;
}

