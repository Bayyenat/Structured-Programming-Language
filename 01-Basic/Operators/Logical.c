#include<stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf("Input values for x y and z\n ");
    scanf("%d \n%d \n%d",&x, &y, &z);

    if(x>y && x>z) {printf("%d is the biggest num",x);}
    if(y>x && y>z) {printf("%d is the biggest num",y);}

    printf("%d)",x>y);

    return 0; }
