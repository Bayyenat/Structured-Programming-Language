#include <stdio.h>

int main() {
    printf("Types of User input\n\n Input an Integer : ");

    int num;
    scanf("%d", &num);

    char character;
    printf("Input Character : \n");
    // Added a space before %c to clear the input buffer
    scanf(" %c", &character);

    char name[20];
    printf("Input first name ");
    // Removed the '&' because an array name is already a pointer/address
    scanf("%s", name);

    return 0;
}
