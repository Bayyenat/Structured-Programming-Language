#include<stdio.h>
int main() {
    int stdID = 502;
    char stdGrade = 'A';
    float stdCG = 3.85;
    double what = 51345;
     printf("size of integer %zu\n", sizeof(stdID));
     printf("size of character %zu\n", sizeof(stdGrade));
     printf("size of float %zu\n", sizeof(stdCG));
    printf("size of double %zu\n", sizeof(what));
    return 0; }
