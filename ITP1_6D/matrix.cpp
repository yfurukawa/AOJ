#include <iostream>
using namespace std;

int main(){
  int n(0), m(0);
  int *a, *b, *c;

  cin >> n >> m;

  a = new int[n * m];
  b = new int[m];
  c = new int[n];

  for(int i = 0; i < n; ++i)
    c[i] = 0;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[m * i + j];
    }
  }

  for(int i = 0; i < m; ++i)
    cin >> b[i];

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      c[i] += a[m * i + j] * b[j];
    }
  }

  for(int i = 0; i < n; ++i)
    cout << c[i] << endl;

  delete[] a;
  delete[] b;
  delete[] c;

  return 0;
}

