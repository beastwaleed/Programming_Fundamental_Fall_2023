#include<stdio.h>

void reverse(int arr[], int si, int ei){

    for(int i=si,j=ei;i<j;i++,j--){

        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }

    return;

}

int main(){

int n,k;
int arr[n];

printf("Enter Array Size: ");
scanf("%d", &n);

printf("Enter Elements to Reverse in Array: ");
scanf("%d", &k);

for(int i=0;i<n;i++){

       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);

    }

    //steps
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i=0;i<n;i++){

        printf("%d ",arr[i]);

    }

}
