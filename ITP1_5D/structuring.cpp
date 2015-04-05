#include <iostream>
using namespace std;

void call(const int n);
void include3(int *n, const int &i);

int main(){
  int n(0);

  cin >> n;

  call(n);
  cout << endl;

  return 0;
}

void call( const int n ){
  int x(0);
  for(int i = 1; i <= n; ++i){
    x = i;
    if( x % 3 == 0 )
      cout << " " << x;
    else
      include3( &x, i );
  }
}

void include3( int *n, const int &i ){
    if( *n % 10 == 3 )
      cout << " " << i;
    else {
      *n /= 10; 
      if( *n )
        include3( n, i );
    }
}

