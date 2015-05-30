#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateVariance(const int& numberOfStudent, const int& sum, const double& avarage, const int* const score);
 
int main() {
  double numberOfStudent(0.0), score[1000], sum(0.0);
  double avarage(0.0), variance(0.0);

  while(1) {
    sum = 0;
    cin >> numberOfStudent;
    if( numberOfStudent == 0 )
      break;

    for(int count = 0; count < numberOfStudent; ++count) {
      cin >> score[count];
      sum += score[count];
    }
    avarage = sum / numberOfStudent;
 
    double tmp(0.0); 
    for(int i = 0; i < numberOfStudent; ++i) {
      tmp += pow(((double)score[i] - avarage), 2.0);
    }
    variance = tmp / numberOfStudent;

    cout << fixed << setprecision(8) << sqrt(variance) << endl;
  }

  return 0;
}

