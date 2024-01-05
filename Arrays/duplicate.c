#include<stdio.h>
int main(){

    int n;
    int arr[n];
  //  int duplicate;

    printf("Enter the Size of Array: ");
    scanf("%d", &n);

for(int i=0;i<n;i++){

printf("Enter Element %d: ", i+1);
     scanf("%d", &arr[i]); 

}

    for(int j=0;j<n;j++){
        
        if(arr[j]==arr[j+1]);
        printf("%d is Duplicate\n", arr[j]);
        break;
    }

}

