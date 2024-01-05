#include<stdio.h>

int reserved_seat(int rows,int col,int seats[rows][col]){
    seats[rows][col];
    printf("Seat is Reserved on Row %d, and Seat No: %d\n",rows,col);
}

int main(){
int seats[10][10];
seats[10][10]=1;
int rows,col;

   printf("Enter Row and Seat Number to Reserve Seat: ");
        for(int i=0;i<10;i++){
            if(rows==0){break;}       
        for(int j=0;j<10;j++){
    
    scanf("%d %d",&rows,&col);
        
        if(rows==0 || col==0){
        printf("Program Exited\n");
        break;
        }
    
        if(seats[rows][col]==0){
        printf("Sorry Seat is Already Reserved!!\n");
        
    }
        else{
        printf("Seat Reserved Succesfully\n");
        reserved_seat(rows,col,seats);
        }

        }
    }
   


}
