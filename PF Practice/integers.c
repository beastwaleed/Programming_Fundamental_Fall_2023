//Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.

#include<stdio.h>
int main(){

    int n1,n2;

printf("Enter Number 1: ");
scanf("%d",&n1);
printf("Enter Number 2: ");
scanf("%d",&n2);

if((n1>=100 && n1<=200) && (n2>=100 && n2<=200)){
    printf("True\n");
}

else{printf("False\n");}


}