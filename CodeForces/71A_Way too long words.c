#include<stdio.h>
#include<string.h>
int main() {
    char name[];
    scanf("%s",name);
    int length= sizeof(name)/sizeof(name[0]);
return length;
}
