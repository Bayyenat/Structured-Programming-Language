#include<stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf("Input values for x y and z\n ");
    scanf("%d \n%d \n%d",&x, &y, &z);

    if(x>y && x>z) {
        printf("x is greater than y & z\n");
        }
    else if (y>z) {printf("Lookin for the biggest one??? itz Yyyyyyyyyyyy");}
    else {printf("y or z is greater number");}
    return 0; }
