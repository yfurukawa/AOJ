#include <iostream>
#include <string>

using namespace std;

void shuffle(string& cards, const int& position);

int main() {
  string cards("");
  int numberOfShuffles(0);
  int position(0);

  while(1) {
    cin >> cards;
    if( cards == "-" )
      break;

    cin >> numberOfShuffles;

    for(int i = 0; i < numberOfShuffles; ++i) {
      cin >> position;
      shuffle(cards, position);
    }

    cout << cards << endl;
  }

  return 0;
}

void shuffle(string& cards, const int& position) {
  string cut;

  cut = cards.substr(0, position);
  cards.erase(0, position);

  cards += cut;
}

