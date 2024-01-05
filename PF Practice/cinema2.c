#include<stdio.h>

int reserved_seat(int rows,int col, int count){
printf("Total Seats Reserved: %d\n",count);


}

int main(){

int seat[10][10];
int rows,col;
int count=0;

do{
    printf("Enter Row and Seat Number to Reserve (0 0 to Stop): ");
    scanf("%d %d",&rows,&col);

    if(rows<0 || rows>10 || col<0 || col>10){
        printf("Invalid Input\n");
    }

    else{
         if((rows==0 && col ==0)|| (col==0 || rows==0)){
            printf("Program Exited\n");
                 }
         else{
        printf("Seat Reserved Succesfully\n");
        count++;
             }
    }
}

while(rows!=0 && col!=0);
reserved_seat(rows,col,count);

}