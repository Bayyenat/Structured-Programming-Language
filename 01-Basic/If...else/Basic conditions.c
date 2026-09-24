#include<stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf("Input values for x y and z\n ");
    scanf("%d \n%d \n%d",&x, &y, &z);

    if(x>y) {printf("%d is 1st one is bigger than 2nd \n",x);}
    if(z!=y) {printf("%d is not equal to %d ",z,y);}

    return 0; }
