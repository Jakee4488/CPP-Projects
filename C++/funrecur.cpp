#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(1000);
  cout << result;
  return 0;
}