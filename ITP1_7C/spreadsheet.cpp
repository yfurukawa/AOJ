#include <iostream>
using namespace std;

int main(){
  int r, c;
  int *matrix;
  int *rSum, *cSum, sum(0);

  cin >> r >> c;

  matrix = new int[r*c];
  rSum = new int[r];
  cSum = new int[c];

  for(int i = 0; i < r; ++i){
    for(int j = 0; j < c; ++j){
      cin >> matrix[i * c + j];
      rSum[i] += matrix[i * c + j];
      cSum[j] += matrix[i * c + j];
      sum += matrix[i * c + j];
    }
  }

  for(int i = 0; i < r; ++i){
    for(int j = 0; j < c; ++j){
      cout << matrix[i * c + j] << " ";
    }
    cout << rSum[i] << endl;
  }

  for(int i = 0; i < c; ++i)
    cout << cSum[i] << " ";
  cout << sum << endl;

  delete[] matrix;
  delete[] rSum;
  delete[] cSum;

  return 0;
}

