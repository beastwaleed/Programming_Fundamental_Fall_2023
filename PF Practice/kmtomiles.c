#include<stdio.h>
int main(){
    float km;

    printf("---------KILOMETERES TO MILES CONVERTER---------\n");

    printf("Enter the Distance in Kilometers: ");
    scanf("%f",&km);

    float miles=km*0.621;

    printf("DISTANCE IN MILES IS: %.3f",miles);
    return 0;
}