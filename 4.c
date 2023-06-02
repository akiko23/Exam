#include <stdio.h>
#include <math.h>
#include <string.h>


int toDecimal(char str[]) {
  int len = strlen(str);
  int decimal = 0;
  for (int i = 0; i < len; i++) {
      int digit = str[i] - '0';
      decimal += digit * pow(2, len - i - 1);
  }
  return decimal;
}


int main() {
  char st[6] = "1011";
  int res = toDecimal(st);

  printf("%d\n", res);
  return 0;
}


