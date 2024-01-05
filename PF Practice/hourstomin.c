#include<stdio.h>
int main(){

int minutes;
int hours;
int min;

    printf("Enter the Minutes to Convert in Hours: ");
    scanf("%d",&minutes);
 
 hours=minutes/60;
 min=minutes%60;
 
 printf("Hours in %d Minutes are: %d and %d min\n",minutes,hours,min);
 
    
}