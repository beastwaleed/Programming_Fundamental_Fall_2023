#include<stdio.h>
int main(){

int denom,numer,rem,quot;

    printf("Enter Numerator: ");
    scanf("%d",&numer); 

    printf("Enter Denominator: ");
    scanf("%d",&denom);
    
    quot=numer/denom;
    rem=numer%denom;

    printf("Quotient is: %d\n",quot);
    printf("Remainder is: %d\n",rem);

}