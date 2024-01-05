#include<stdio.h>
int main(){

    int array[2][2]={{1,5} , {2,4}};
    int array2[2][2]={{3,6},{7,2}};
    int sum[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

        sum[i][j]=array[i][j]+array2[i][j];
        printf(" %d  ",sum[i][j]);

    }
printf("\n");

}


}