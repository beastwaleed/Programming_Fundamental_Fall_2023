//check whether triangle is valid or not.
#include<stdio.h>
int main(){

int angle1;
int angle2;
int angle3;

int sum=0;

    printf("Enter Alpha Angle: ");
    scanf("%d", &angle1);

    printf("Enter Beta Angle: ");
    scanf("%d", &angle2);

    printf("Enter Gamma Angle: ");
    scanf("%d", &angle3);

    sum=angle1+angle2+angle3;

    if(sum>180){
        printf("This Triangle is not Valid\n");
    }

    else{
        printf("This Triangle is Valid\n");
    }

}
