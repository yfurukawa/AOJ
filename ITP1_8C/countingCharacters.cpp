#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string inLine("");
  int histgram[26];

  for(int i = 'a'-'a'; i <= 'z' - 'a'; ++i)
    histgram[i] = 0;

  while(1) {
    getline(cin, inLine);
    if(inLine == "")
      break;
    transform(inLine.begin(), inLine.end(), inLine.begin(), ::tolower);

    for(string::iterator itr  = inLine.begin();
                         itr != inLine.end(); ++itr) {
      ++histgram[*itr - 'a'];
    }
  }

  for(int i = 'a' - 'a'; i <= 'z' - 'a'; ++i)
    cout << static_cast<char>(i + 'a') << " : " << histgram[i] << endl;

  return 0;
}

