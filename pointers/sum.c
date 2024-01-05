#include<stdio.h>

int sum(int *x,int *y){

return *x+*y;

}


int main(){

int a;
int b;
int *x=&a;
int *y=&b;

printf("Enter the 1st Number: ");
scanf("%d", &a);

printf("Enter the 2nd Number: ");
scanf("%d", &b);

int result=sum(x,y);

printf("Sum of 2 Number is %d", result);

return 0;
}