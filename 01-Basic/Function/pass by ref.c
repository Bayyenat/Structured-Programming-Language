#include<stdio.h>
void triplevalue(int *x) {
 *x = (*x) * 3;
 printf("Triple value is %d", *x);
}
int main() {
int s;
printf("input value : ");
scanf("%d",&s);
triplevalue(&s);
}
