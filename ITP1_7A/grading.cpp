#include <iostream>
using namespace std;

bool isAbsent(const int &mid, const int &last);
bool isGradeA(const int &mid, const int &last);
bool isGradeB(const int &mid, const int &last);
bool isGradeC(const int &mid, const int &last);
bool isGradeD(const int &mid, const int &last);
bool isGradeF(const int &mid, const int &last);
bool isEnd(const int &mid, const int &last, const int &reExam);

int main(){
  int m(0), f(0), r(0);
  while(1){
    cin >> m >> f >> r;
    if(isEnd(m, f, r))
      break;
    if(isAbsent(m, f))
      cout << "F" << endl;
    else if(isGradeA(m, f))
      cout << "A" << endl;
    else if(isGradeB(m, f))
      cout << "B" << endl;
    else if(isGradeC(m, f))
      cout << "C" << endl;
    else if(isGradeD(m, f)){
      if(r >= 50)
        cout << "C" << endl;
      else
        cout << "D" << endl;
    }
    else if(isGradeF(m, f))
      cout << "F" << endl;
  }
  return 0;
}
bool isEnd(const int &mid, const int &last, const int &reExam){
  return mid == -1 && last == -1 && reExam == -1;
}
bool isGradeA(const int &mid, const int &last){
  return mid + last >= 80;
}
bool isGradeB(const int &mid, const int &last){
  return mid + last >= 65 && mid + last < 80;
}
bool isGradeC(const int &mid, const int &last){
  return mid + last >= 50 && mid + last < 65;
}
bool isGradeD(const int &mid, const int &last){
  return mid + last >= 30 && mid + last < 50;
}
bool isGradeF(const int &mid, const int &last){
  return mid + last < 30;
}
bool isAbsent(const int &mid, const int &last){
  return mid == -1 || last == -1;
}

