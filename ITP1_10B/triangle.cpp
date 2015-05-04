#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159265

using namespace std;

double calcSideB(const double& bottom, const double& sideA, const double& angle);

int main() {
  double bottom(0.0), sideA(0.0), sideB(0.0);
  double angle(0.0);
  double hight(0.0), s(0.0), l(0.0);

  cin >> bottom >> sideA >> angle;

  hight = sideA * sin(angle * PI/180);
  s = bottom * hight * 0.5;
  sideB = calcSideB(bottom, sideA, angle);
  l = sideA + sideB + bottom;

  cout << fixed << setprecision(8) << s << endl;
  cout << fixed << setprecision(8) << l << endl;
  cout << fixed << setprecision(8) << hight << endl;

  return 0;
}

double calcSideB(const double& bottom, const double& sideA, const double& angle) {
  double x(0.0), y(0.0);

  x = sideA * cos(angle * PI/180);
  y = sideA * sin(angle * PI/180);

  return sqrt( pow((bottom - x), 2.0) + pow(y, 2.0) );
}

