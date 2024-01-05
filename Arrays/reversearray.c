#include<stdio.h>
int main(){

int array[100];
int n, i, j, temp;   
int revarray[100]; 

printf("Reverse Elements of Arrays\n");

printf("Enter Number of Elements you wish to Reverse: ");
scanf("%d", &n);

for(i=n-1;i>0;i--){

      printf("Enter Numbers: ");
    scanf("%d", &array[i]);


    for(j=0;j<n;j++){
   
        revarray[j]=array[i];
        temp=j;

}

    printf("%d ", revarray[i]);


}


}
