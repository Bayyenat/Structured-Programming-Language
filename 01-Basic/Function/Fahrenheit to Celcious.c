#include<stdio.h>

float toCelcious(float fahrenheit) {
float x = (5.0/9.0)* (fahrenheit-32.0);
printf("%.3f",x);
return x;

}


int main() {

printf("Input Fahrenheit value : ");
float x;
scanf("%f",&x);
toCelcious(x);

return 0;
}
