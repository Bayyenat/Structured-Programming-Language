#include<stdio.h>
int nums[] = {93,92,85,23,40,56,79};
int length= sizeof(nums)/sizeof(nums[0]);
int main() {
int lowestnum;
lowestnum=nums[0];
int i;
for(i=0;i<length;i++){
    if(lowestnum > nums[i]){
       lowestnum=nums[i];
    }
}
printf("%d is the lowest",lowestnum);
return 0;

}







