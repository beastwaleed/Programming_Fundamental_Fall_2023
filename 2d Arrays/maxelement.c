#include<stdio.h>
int main(){

int arr[2][2];
int min=arr[0][0];

printf("Enter Values of Matrix\n");
for(int row=0;row<2;row++){
    for(int col=0;col<2;col++){
        printf("Enter Number for %d row & %d Coloum: ",row+1,col+1);
        scanf("%d",&arr[row][col]);

        if(arr[row][col]<min){
            min=arr[row][col];
        }
    
    }
}
printf("Max Number is %d\n", min);

}