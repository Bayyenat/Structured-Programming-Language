#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int *p = myNumbers;

  for (int i = 0; i < 4; i++) {
    printf("%d\n", *p);
    p++; //no index is needed if used pointer
  }
  return 0;
}
