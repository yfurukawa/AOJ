#include <iostream>
#include <vector>

using namespace std;

class Dice {
 public:
  Dice() : topOfFace_(0){};
  ~Dice() {};
  void setNumber(int face, int number);
  bool isSame(Dice* otherDice);
  int getNumber(int face) { return number_[face]; };
  void turnE();
  void turnHorizontal();
 private:
  bool isAllFaceSame(Dice* otherDice);
  void printDice(Dice* otherDice);
  int number_[6];
  int topOfFace_;
};

void Dice::setNumber(int face, int number) {
  number_[face] = number;
}

bool Dice::isSame(Dice* otherDice) {
  for(int i = 0; i < 3; ++i) {
    for(int front = 0; front < 4; ++front) {
      if( isAllFaceSame(otherDice) )
        return true;
      otherDice->turnHorizontal();
    }
    otherDice->turnHorizontal();
    otherDice->turnE();
  }
  return false;
}

bool Dice::isAllFaceSame(Dice* otherDice) {
  for(int i = 0; i < 2; ++i) {
    printDice(otherDice);
    if( number_[0] == otherDice->getNumber(0) && 
        number_[1] == otherDice->getNumber(1) &&
        number_[2] == otherDice->getNumber(2) &&
        number_[3] == otherDice->getNumber(3) &&
        number_[4] == otherDice->getNumber(4) &&
        number_[5] == otherDice->getNumber(5) )
      return true;

    otherDice->turnE();
    otherDice->turnE();
  }
  return false;
}

void Dice::turnE() {
  int tmp;
  tmp = number_[0];

  number_[0] = number_[3]; number_[3] = number_[5]; number_[5] = number_[2];
  number_[2] = tmp;
}

void Dice::turnHorizontal() {
  int tmp;
  tmp = number_[1];

  number_[1] = number_[2]; number_[2] = number_[4]; number_[4] = number_[3];
  number_[3] = tmp;
}

void Dice::printDice(Dice* otherDice) {
  int zero(0), one(1), two(2), three(3), four(4), five(5);
  cout << endl;
  cout << "  " << otherDice->getNumber(zero) << endl;
  cout << otherDice->getNumber(three) << " " << otherDice->getNumber(one) << " " << otherDice->getNumber(two) << " " << otherDice->getNumber(four) << endl;
  cout << "  " << otherDice->getNumber(five) << endl;
}

int main() {
  int number(0);
  bool result(false);
  vector<Dice*> dices;

  int numberOfDices(0);
  cin >> numberOfDices;

  for(int count = 0; count < numberOfDices; ++count) {
    dices.push_back(new Dice());
    for(int face = 0; face < 6; ++face) {
      cin >> number;
      dices[count]->setNumber(face, number);
    }
  }

  for(int i = 1; i < numberOfDices; ++i) {
  if( dices[0]->isSame(dices[i]) )
    result |= true;
  else
    result |= false;
  }

  if( !result )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  for(vector<Dice*>::iterator itr = dices.begin(); itr != dices.end(); ++itr)
    delete *itr;

  return 0;
}

