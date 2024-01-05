#include <stdio.h>
int sum(int *ptr){

    int sum=0;

    for(int i=0;i<6;i++){
        sum+=*ptr;
        ptr++;
        
    }
    return sum;
}

int main(){
int arr[6]={1,2,3,4,5,6};
int *ptr=arr;
int result=sum(ptr);

printf("Sum of the Array is: %d ",result);

return 0;

}