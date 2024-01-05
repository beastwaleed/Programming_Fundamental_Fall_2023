#include<stdio.h>

int show(int *p){
    for(int i=0;i<5;i++){
        printf("%d ", *p);
        p++;
    }

}

int main(){

    int arr[5];
    int *p=arr;
 
    for(int i=0;i<5;i++){
        printf("Enter Values: ");
        scanf("%d",&arr[i]);
    }

    show(p);

}