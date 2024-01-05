#include<stdio.h>
int main(){

    int size;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

 int arr[size];

for(int i=0;i<size;i++){

    printf("Enter Number %d : ",i+1);
    scanf("%d",&arr[i]);

}

    for(int i=0;i<size/2;i++){
            if(arr[i]!=arr[size-i-1]){
            printf("Array is not Palindrome\n");
              break;
    }

    else{
        printf("Array is Palindrome\n");
        break;
    
    }
    
    }

  return 0;

}