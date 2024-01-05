#include<stdio.h>
int main(){

int n=0;
int arr[n];
int reverse[n];

printf("Enter the Number of Elements in Array = ");
scanf("%d", &n);

for(int i=0;i<n;i++){
printf("Enter %d Element: ", i+1);
scanf("%d", &arr[i]);

for (int i = 0; i < n; i++){
        reverse[i] = arr[i];
    }
}

printf("\nOriginal Array\n");
for(int x=0;x<n;x++){
    printf("%d ",arr[x]);
}

printf("\nReversed Array\n");
for(int y=n-1;y>=0;y--){
    printf("%d ",reverse[y]);
}

return 0;

}