#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
  double r(0.0);

  std::cin >> r;

  std::cout << std::fixed << std::setprecision(6) << M_PI * r * r << " ";
  std::cout << std::fixed << std::setprecision(6) << 2 * M_PI * r << std::endl;

  return 0;
}

