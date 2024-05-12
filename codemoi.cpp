#include<bits/stdc++.h>
using namespace std;
double calculatePi() {
  double pi = 0.0;
  int sign = 1;
  for (int i = 0; i < 1000000; i++) {
    pi += sign * (1.0 / (2 * i + 1));
    sign *= -1;
  }
  pi *= 4;
  return pi;
}
int main(){
    int n=4;
    cout<< calculatePi()*n <<endl;
}
