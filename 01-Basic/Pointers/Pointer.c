#include<stdio.h>
int main() {
    int age=21;
    int* adrage= &age;

    printf("%d\n",age);
      printf("%d\n",&age);
     printf("%d\n",adrage);
}
