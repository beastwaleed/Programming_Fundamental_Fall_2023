#include<stdio.h>
int main(){
    int n1;
    int n2;
    int *x=&n1;
    int *y=&n2;

    printf("Enter Number 1: ");
    scanf("%d",&n1);

    printf("Enter Number 2: ");
    scanf("%d",&n2);

    if(*x>*y){
        printf("%d is Greater Number\n",n1);
    }

    else{
        printf("%d is Greater Number\n",n2);

    }

}