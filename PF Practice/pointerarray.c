#include<stdio.h>
int main(){
    int arr[5]={25,45,89,12,82};
    int arr2[5];

    int *ptr=&arr[0];
int temp;
    for(int i=0;<5;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            
        }
    }

}