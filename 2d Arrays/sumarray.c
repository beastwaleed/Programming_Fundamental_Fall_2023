#include<stdio.h>
int main(){

    int arr1[2][2];
    int arr2[2][2];

    int sum[2][2]={0,0,0,0};

    printf("Enter Values for First Matrix\n");
    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
            printf("Enter The Number of %d Row & %d Coloumn: ",row+1,col+1);
            scanf("%d",&arr1[row][col]);
        }
    }

    printf("Enter Values for Second Matrix\n");
    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
            printf("Enter The Number of %d Row & %d Coloumn: ",row+1,col+1);
            scanf("%d",&arr2[row][col]);
        }
    }
    
    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){

            sum[row][col]=arr1[row][col]+arr2[row][col];

        }
        }

for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){

        printf("%d ",sum[row][col]);

        }
        printf("\n");
        }

}

