#include <stdio.h>

struct PC {
    char name[50];
    int speed;
		int RAM;
};

struct PC* fastestPC(struct PC data[], int n) {
  struct PC* fastest = &data[0];
  for (int i = 0; i < n; i++) {
    if (data[i].speed > fastest->speed) {
      fastest = &data[i];
    }
  }
  return fastest;
}

int main() {
  int n = 3;
  
  struct PC arr[n] = {{"Name1", 23, 16}, {"Asus Prime", 50, 32}, {"MacBook", 120, 64}};

  struct PC* ans = fastestPC(arr, n);
  printf("%d\n", ans->speed);
}


