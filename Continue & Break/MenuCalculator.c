#include<stdio.h>
int main(){

int n1,n2;
char choice; 
char cont;
do {
printf("Press [+ for Addition] [ - for Subtraction] [x for Multiplication] [/ for Division] = ");

    scanf(" %c", &choice);

    if(choice=='+'){
    printf("Enter Number 1 = ");
    scanf(" %d", &n1);

    printf("Enter Number 2 = ");
    scanf(" %d", &n2);

    int sum=n1+n2;

    printf("The sum of %d and %d is %d\n",n1,n2,sum);

}

if(choice=='-'){

 printf("Enter Number 1 = ");
    scanf(" %d", &n1);

    printf("Enter Number 2 = ");
    scanf(" %d", &n2);

    int minus=n1-n2;

    printf("The Difference between %d and %d is %d \n",n1,n2,minus );

} 

if(choice=='x'){

    printf("Enter Number 1 = ");
    scanf(" %d", &n1);

    printf("Enter Number 2 = ");
    scanf(" %d", &n2);

    int product=n1*n2;

    printf("The Product of %d and %d is %d \n",n1,n2,product );

} 

if(choice=='/'){

printf("Enter Number 1 = ");
    scanf(" %d", &n1);

    printf("Enter Number 2 = ");
    scanf(" %d", &n2);
    if(n2==0){

    printf("Denominator Must be greater than zero for suitable result in Division");
        scanf(" %d", &n2);
    }

    float divide=n1/n2;

    printf("The Difference between %d and %d is %.2f \n",n1,n2,divide);

} 
    
    
    printf("Do You want to Make More Calculation [Press y/Y for Yes n/N for Exit]: ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    return 0;
}