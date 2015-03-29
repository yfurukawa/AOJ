#include <iostream>

int main() {
  int a;
  int count(1);

  while(1) {
    std::cin >> a;
    if( a == 0 )
      break;

    std::cout << "Case " << count++ << ": " << a << std::endl;
  }

  return 0;
}
 
