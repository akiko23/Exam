#include <stdio.h>
#include <math.h>

float sumFoo(int n) {
  float res = 1;
  for (int i = 2; i <= n; i++) {
    res += 1 / pow(i, 2); 
  }
  return res;
}

int main() {
  float res = sumFoo(4);
  printf("%f\n", res);
  return 0;
}

