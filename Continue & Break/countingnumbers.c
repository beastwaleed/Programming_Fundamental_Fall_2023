/*
Counting Numbers:
Write a program to count and print all numbers from 1 to 100. However, skip numbers divisible by both 3 and 5 using the continue statement. 
Stop the loop when you reach the first multiple of 7 using the break statement.
*/


#include<stdio.h>
int main(){

int i,j,n;

printf("\nCounting and printing all numbers from 1 to 100 \nskip numbers divisible by both 3 and 5\nStop the loop when you reach the first multiple of 7\n");

for(int i=1;i<101;i++){

    if(i%7==0){

        break;
    }

    if(i%3==0 && i%5==0){

        continue;

    }

    else{

     printf("%d ",i);

    }

}

}
