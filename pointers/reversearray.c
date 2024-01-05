#include<stdio.h>
int main(){

int arr[2][2]={1,2,3,4}; //array of 2x2
int *ptr; //pointer 
ptr=&arr[1][1]; //last element of array

for(int i=0;i<4;i++){ //loop for printing array
    if(i==2){ //condition for new line
        printf("\n");
    }
    printf("%d ",*ptr);//printing value stored on that pointer
    ptr--; //decrement pointer(because it is starting from last element)
}
return 0;
}