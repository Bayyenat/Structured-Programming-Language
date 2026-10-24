#include<stdio.h>
#include<string.h>
int main() {
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

printf("%d  means strings are equal\n", strcmp(str1, str2));


printf("%d  means strings are not equal\n", strcmp(str1, str3));


return 0;
}
