#include<stdio.h>
int main(){

int a=5873;
int *ptr=&a;
int arr[4];

arr[0]=*ptr%10;
arr[1]=(*ptr/10)/10%10;
arr[2]=(*ptr/10)%10;
arr[3]=*ptr/1000;

for(int i=0;i<4;i++){
    printf("%d ",arr[i]);

}

}