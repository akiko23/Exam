#include <stdio.h>

int main() {
  int num, prev = 0, c = 0;
  while (num != 0) {
    scanf("%d", &num);
    if (prev == 0) {
      prev = num;
      continue;
    }

    if (prev + 3 == num) {
      c++;
    }
    prev = num;
  }
  printf("%d\n", c);
  return 0;
}

