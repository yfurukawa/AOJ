#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double x1(0.0), x2(0.0), y1(0.0), y2(0.0);
  double distance(0.0);

  cin >> x1 >> y1 >> x2 >> y2;

  distance = sqrt( pow((x2-x1), 2.0) + pow((y2-y1), 2.0) );


  cout << fixed << setprecision(6) << distance << endl;

  return 0;
}

