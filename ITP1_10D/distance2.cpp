#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void calcMinkowskiDistance(const int& p, const int& numberOfData, const int* x, const int* y);
void calcChebyshevDistance(const int& numberOfData, const int* x, const int* y);

int main() {
  int numberOfData(0);
  cin >> numberOfData;  

  int x[1000], y[1000];
  for(int i = 0; i < numberOfData; ++i)
    cin >> x[i];
  for(int i = 0; i < numberOfData; ++i)
    cin >> y[i];

  calcMinkowskiDistance(1, numberOfData, x, y);
  calcMinkowskiDistance(2, numberOfData, x, y);
  calcMinkowskiDistance(3, numberOfData, x, y);
  calcChebyshevDistance(numberOfData, x, y);

  return 0;
}

void calcMinkowskiDistance(const int& p, const int& numberOfData, const int* x, const int* y) {
  double sum(0.0);
  for(int i = 0; i < numberOfData; ++i )
    sum += pow((abs(*(x + i) - *(y + i))), (float)p);

  cout << fixed << setprecision(8) << pow(sum, 1.0/(float)p) << endl; 
}

void calcChebyshevDistance(const int& numberOfData, const int* x, const int* y) {
  double distance(0.0);

  for(int i = 0; i < numberOfData; ++i ) {
    if(distance < abs(*(x + i) - *(y + i)))
      distance = abs(*(x + i) - *(y + i));
  }

  cout << fixed << setprecision(8) << distance << endl;
}

