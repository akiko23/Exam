#include <stdio.h>
#include <math.h>
#include <string.h>


int toDecimal(char str[]) {
  int res = 0;
  for (int i = strlen(str); i >= 0; i--) {
    if (str[i] == '1') {
      res += pow(2, i + 1);
    }
  }
  return res;
}


int main() {
  char st[6] = "101";
  int res = toDecimal(st);

  printf("%d\n", res);
  return 0;
}

