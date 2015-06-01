#include <iostream>

using namespace std;

class Dice {
 public:
  Dice() : topOfFace_(0){};
  ~Dice() {};
  void setNumber(int face, int number);
  bool isSame(Dice& otherDice);
  int getNumber(int face) { return number_[face]; };
  void turnN();
  void turnE();
  void turnS();
  void turnW();
  void turnHorizontal();
 private:
  void changeTopFace() {turnE();};
  void changeFrontFace() {turnHorizontal();};
  bool isAllFaceSame(Dice& otherDice);
  void printDice(Dice& otherDice);
  int number_[6];
  int topOfFace_;
};

void Dice::setNumber(int face, int number) {
  number_[face] = number;
}

bool Dice::isSame(Dice& otherDice) {
  for(int i = 0; i < 3; ++i) {
    for(int front = 0; front < 4; ++front) {
      if( isAllFaceSame(otherDice) )
        return true;
      otherDice.changeFrontFace();
    }
    otherDice.changeFrontFace();
    otherDice.turnE();
  }
  return false;
}

bool Dice::isAllFaceSame(Dice& otherDice) {
  for(int i = 0; i < 2; ++i) {
    printDice(otherDice);
    if( number_[0] == otherDice.getNumber(0) && 
        number_[1] == otherDice.getNumber(1) &&
        number_[2] == otherDice.getNumber(2) &&
        number_[3] == otherDice.getNumber(3) &&
        number_[4] == otherDice.getNumber(4) &&
        number_[5] == otherDice.getNumber(5) )
      return true;

    otherDice.turnE();
    otherDice.turnE();
  }
  return false;
}

void Dice::turnN() {
  int tmp;
  tmp = number_[0];

  number_[0] = number_[1]; number_[1] = number_[5]; number_[5] = number_[4];
  number_[4] = tmp;
}

void Dice::turnE() {
  int tmp;
  tmp = number_[0];

  number_[0] = number_[3]; number_[3] = number_[5]; number_[5] = number_[2];
  number_[2] = tmp;
}

void Dice::turnS() {
  int tmp;
  tmp = number_[0];

  number_[0] = number_[4]; number_[4] = number_[5]; number_[5] = number_[1];
  number_[1] = tmp;
}

void Dice::turnW() {
  int tmp;
  tmp = number_[0];

  number_[0] = number_[2]; number_[2] = number_[5]; number_[5] = number_[3];
  number_[3] = tmp;
}

void Dice::turnHorizontal() {
  int tmp;
  tmp = number_[1];

  number_[1] = number_[2]; number_[2] = number_[4]; number_[4] = number_[3];
  number_[3] = tmp;
}

void Dice::printDice(Dice& otherDice) {
  int zero(0), one(1), two(2), three(3), four(4), five(5);
  cout << endl;
  cout << "  " << otherDice.getNumber(zero) << endl;
  cout << otherDice.getNumber(three) << " " << otherDice.getNumber(one) << " " << otherDice.getNumber(two) << " " << otherDice.getNumber(four) << endl;
  cout << "  " << otherDice.getNumber(five) << endl;
}

int main() {
  Dice dice;
  Dice dice2;
  int number(0);
  bool result(false);

  for(int face = 0; face < 6; ++face) {
    cin >> number;
    dice.setNumber(face, number);
  }

  for(int face = 0; face < 6; ++face) {
    cin >> number;
    dice2.setNumber(face, number);
  }

  if( dice.isSame(dice2) )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}

