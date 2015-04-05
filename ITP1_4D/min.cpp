#include <iostream>

using namespace std;

int main(){
  int n(0);
  long a[10001];
  long long sum(0);
  long min(1000000);
  long max(-10000000);

  cin >> n;

  for(int i = 0; i < n; ++i)
    cin >> a[i];

  for(int i = 0; i < n; ++i){
    sum += a[i];
    if( a[i] < min )
      min = a[i];
    if( max < a[i] )
      max = a[i];
  }

  cout << min << " " << max << " " << sum << endl;
  return 0;
}

