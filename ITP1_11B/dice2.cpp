#include <iostream>
#include <string>

using namespace std;

class Dice {
 public:
  Dice() : topOfFace_(0){};
  ~Dice() {};
  void setNumber(int face, int number);
  void turnN();
  void turnE();
  void turnS();
  void turnW();
  void turnHorizontal();
  void rotate(int& top, int& front);
  void printAnswer();
 private:
  int number_[6];
  int topOfFace_;
  int findPosition(const int& target);
};

void Dice::setNumber(int face, int number) {
  number_[face] = number;
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

void Dice::printAnswer() {
  cout << number_[2] << endl;
}

void Dice::rotate(int& top, int& front) {
  int position = findPosition(top);
  if(position == 1) {
    turnN();
  }
  else if(position == 2) {
    turnW();
  }
  else if(position == 3) {
    turnE();
  }
  else if(position == 4) {
    turnS();
  }
  else if(position == 5) {
    turnE();
    turnE();
  }
  
  position = findPosition(front);
  if(position == 2) {
    turnHorizontal();
  }
  else if(position == 4) {
    turnHorizontal();
    turnHorizontal();
  }
  else if(position == 3) {
    turnHorizontal();
    turnHorizontal();
    turnHorizontal();
  }
}

int Dice::findPosition(const int& target) {
  int i;
  for(i = 0; i < 6; ++i) {
    if( number_[i] == target )
      break;
  }
  return i;
}

int main() {
  Dice dice;
  int number(0);

  for(int face = 0; face < 6; ++face) {
    cin >> number;
    dice.setNumber(face, number);
  }

  int numberOfQuestions(0);
  cin >> numberOfQuestions;

  int top(0), front(0);

  for(int i = 0; i < numberOfQuestions; ++i) {
    cin >> top >> front;
    dice.rotate(top, front);
    dice.printAnswer();
  }

  return 0;
}

