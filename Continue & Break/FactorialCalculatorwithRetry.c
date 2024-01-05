/*
Factorial Calculator with Retry:
Develop a program that calculates the factorial of a given number. 
If the user enters a negative number, use the continue statement to skip the 
current iteration and prompt the user for input again. 
Use the break statement to exit the loop when a positive number is provided.

*/



#include<stdio.h>

int main(){

    int i,j,n;

while(1){
int f=1;
printf("Factorial Calculator with Retry:\n");
printf("Enter the Number for Factorial: ");
scanf("%d",&n);

if(n < 0){
printf("Please enter a non-negative number.\n\n");
    continue;
}

for(i=1;i<=n;i++){

    f = f*i;
}
printf("%d \n",f);
}
}
