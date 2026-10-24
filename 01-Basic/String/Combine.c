#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Welcome   ";
  char str2[] = "Player!";

  strcat(str1, str2);

  printf("%s", str1);

  return 0;
}
