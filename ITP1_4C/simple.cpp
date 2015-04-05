#include <iostream>

int main(){
  int a(0);
  int b(0);
  char op;

  while(1) {
    std::cin >> a >> op >> b;

    switch( op ){
      case '?':
        return 0;
        break;
      case '+':
        std::cout << a + b << std::endl;
        break;
      case '-':
        std::cout << a - b << std::endl;
        break;
      case '*':
        std::cout << a * b << std::endl;
        break;
      case '/':
        std::cout << a / b << std::endl;
        break;
      default:
        return 0;
        break;
    }
  }
  return 0;
}

