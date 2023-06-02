#include <stdio.h>
#include <math.h>

struct Coord {
	int x;
	int y;
};
 

int canGet(struct Coord start, struct Coord finish) {
  int x1 = start.x, y1 = start.y, x2 = finish.x, y2 = finish.y;
  if ((abs(x1 - x2) == 2 && abs(y2 - y1) == 1) || (abs(x1 - x2) == 1 && abs(y2 - y1) == 2)) {
    return 1;
  }
  return 0;
}

int main() {
  struct Coord start_pos = {4, 4};
  struct Coord finish_pos = {5, 2};

  int res = canGet(start_pos, finish_pos);
  printf("%d\n", res);
}


