#include<stdio.h>

float temperature(float *temp){

    return (*temp-32)*5/9;

}

int main(){

float kelvin;
float *temp=&kelvin;

printf("Enter Temperature in Kelvin to Convert in Celsius: ");
scanf("%f",&kelvin);

printf("Temperature in Celsius is %.3f ",temperature(temp));

}