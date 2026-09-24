#include<stdio.h>
int main() {
    int x;
    int y;
    int z;
    printf("Input values for x y and z\n ");
    scanf("%d \n%d \n%d",&x, &y, &z);

    if(x>y) {
        printf("x is greater than y\n");
        if (x>z){
            printf("x is also greater than z");
        }
    }
    else {printf("y or z is greater number");}
    return 0; }
