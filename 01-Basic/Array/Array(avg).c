#include<stdio.h>
int ages[] = {10,32,53,20,43};

int length= sizeof(ages)/ sizeof(ages[0]);
int main() {
int sum=0;
int i;
for(i=0;i<5;i++){
    sum=sum+ages[i];
    }

float avg=sum/length;
printf("avg is %f",avg);
}
