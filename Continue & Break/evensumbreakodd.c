/* Question: Sum of Even Numbers: Write a program to calculate the sum of even numbers between 1 and 20. 
Use the continue statement to skip odd numbers and the break statement to exit the loop when the sum reaches or exceeds 50.
*/


#include<stdio.h>
int main(){

    int n,sum=0;
    printf("Sum of Even Numbers from 1 - 20\n");

    for(int i=0;i<=20;i++){

        if(i%2!=0){

            continue;
                
                }

        if(i%2==0){
            sum+=i;

            if(sum>=50){

            break;
              }
        }

        }
       
printf("%d \n",sum);
printf("breaking the program because sum exceeded 50");


    }

