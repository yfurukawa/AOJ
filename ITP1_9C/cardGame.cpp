#include <iostream>
#include <string>

using namespace std;

bool isTaroWin(const string& card1, const string& card2);
bool isHanakoWin(const string& card1, const string& card2);

int main() {
  string cardTaro("");
  string cardHanako("");
  int scoreTaro(0);
  int scoreHanako(0);
  int numberOfTurns(0);

  cin >> numberOfTurns;

  for(int turn = 0; turn < numberOfTurns; ++turn) {
    cin >> cardTaro >> cardHanako;

    if( isTaroWin(cardTaro, cardHanako) ) {
      scoreTaro += 3;
    }
    else if( isHanakoWin(cardTaro, cardHanako) ) {
      scoreHanako += 3;
    }
    else {
      ++scoreTaro;
      ++scoreHanako;
    }
  }

    cout << scoreTaro << " " << scoreHanako << endl;

  return 0;
}

bool isTaroWin(const string& cardTaro, const string& cardHanako) {
  return cardTaro > cardHanako;
}

bool isHanakoWin(const string& cardTaro, const string& cardHanako) {
  return cardTaro < cardHanako;
}

