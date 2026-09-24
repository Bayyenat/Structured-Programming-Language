#include<stdio.h>
int main() {
    int x;
    int y;

    printf("Input values for x, y\n ");
    scanf("%d \n%d ",&x, &y);

    if(x>y) {printf("%d is the biggest num",x);}
    else{printf("%d is the biggest num",y);}


    return 0; }
