#include<stdio.h>
int main() {
int i;

for (i = 0; i < 20; i++) {
  if (i == 2) {
    continue;
  }

if (i == 7) {
    continue;
  }
  if (i == 19) {
    break;
  }
  printf("%d  ", i);
}

return 0;
}
