#include<stdio.h>
int arr[]={42,37,98,-98,03,-52,00,93,24};
int length= sizeof(arr)/sizeof(arr[3]);
int main() {

for(int i=0; i<length; i++){
    if(arr[i]<0) {
        continue;
        }
    if(arr[i]==0){
        break;
        }
        printf("%d\n", arr[i]);
    }


}
