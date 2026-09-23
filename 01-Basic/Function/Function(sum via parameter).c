#include<stdio.h>
int calcio(int x,int y) {
    int sum=x+y;
    return sum;
    printf("%d is sum",sum);
}
int main() {
    int n1,n2;
    printf("input value for x and y\n");
    scanf("%d %d", &n1, &n2);
    calcio(n1,n2);


}
