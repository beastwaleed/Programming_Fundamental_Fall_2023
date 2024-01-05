#include<stdio.h>

int main(){

    int n;
    int x;

    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){

        printf("Enter Number %d: ",i+1);
        scanf("%d", &arr[i]);

    }

    printf("Enter Element to Find: ");
    scanf("%d", &x);

    for(int i=0;i<n;i++){

        if(arr[i]==x){

            printf("%d is Available on %d\n", x,i);
            break;
        }

         else if (i==n - 1) {
        printf("%d is Not Available in the Array\n", x);
    }

    }

    return 0;
}