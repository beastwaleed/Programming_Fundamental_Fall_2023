//check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main(){

    int angle1;
    int angle2;
    int angle3;

    printf("Enter Alpha Angle: ");
    scanf("%d", &angle1);

    printf("Enter Beta Angle: ");
    scanf("%d", &angle2);

    printf("Enter Gamma Angle: ");
    scanf("%d", &angle3);

    if(angle1==angle2 && angle2==angle3 && angle1==angle3){

        printf("Traingle is Equilateral \n");
    }

    if(angle1==angle2 && angle2!=angle3 && angle1!=angle3){
        printf("Traingle is Isoceles \n");
    }

    if(angle1==angle3 && angle3!=angle2 && angle1!=angle2){
        printf("Traingle is Isoceles \n");

    }

    if(angle2==angle3 && angle2!=angle1 && angle1!=angle3){
        printf("Traingle is Isoceles \n");
    }

    if(angle1!=angle2 && angle2!=angle3 && angle1!=angle3){
       printf("Traingle is Scalene \n");
    }

}