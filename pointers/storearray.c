#include<stdio.h>
int main(){
   
     int n;
     int *parr;
    printf("Enter Number of Elements for Array: ");
    scanf("%d",&n);
    int arr[n];
    parr=&arr[0];
    printf("Enter 5 Elements\n");

    for(int i=0;i<n;i++){
        printf("%d Element: ",i+1);
        scanf("%d",&arr[i]);    
    }

    printf("Expected Output\n");
    for(int i=0;i<n;i++){
        printf("%d ",*parr);
        parr++;
    }



   
}