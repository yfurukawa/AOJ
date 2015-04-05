#include <iostream>
using namespace std;

int main(){
  int n(0), m(0), l(0);
  long *a, *b, *c;

  cin >> n >> m >> l;
  a = new long[n * m];
  b = new long[m * l];
  c = new long[n * l];

  for(int i = 0; i < n * l; ++i)
    c[i] = 0;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i * m + j];
    }
  }

  for(int i = 0; i < m; ++i){
    for(int j = 0; j < l; ++j){
      cin >> b[i * l + j];
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < l; ++j){
      for(int k = 0; k < m; ++k){
        c[i * l + j] += a[i * m + k] * b[k * l + j];
      }
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < l; ++j){
      cout << c[i * l + j];
      if(j < l -1) cout << " ";
    }
    cout << endl;
  }
  
  delete[] a;
  delete[] b;
  delete[] c;

  return 0;
}

