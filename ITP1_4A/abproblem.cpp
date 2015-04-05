#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  long a(0);
  long b(0);
  long d(0);
  long r(0);
  double f(0.0);

  cin >> a >> b;

  d = a / b;
  r = a % b;
  f = static_cast<double>(a) / b;

  cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;

  return 0;
}

