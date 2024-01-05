#include<stdio.h>

int multiply(int num, int count, int jack) {
    int result = 1;
    for (int i = 1; i <= count; i++) {
        result *= jack;
    }
    result *= num;
    printf("Multiplication of Number is: %d\n", result);
    return result;
}

int main(){

int num;
const int jack=5;
int count=0;

    printf("Enter the Number to Multiply by %d: ",jack);
    scanf("%d",&num);
       
       int newnum=num;
    do {
        newnum /= 10;
        ++count;
    } while (newnum!= 0);

    multiply(num, count, jack);

    return 0;
}