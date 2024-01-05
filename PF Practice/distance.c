#include<stdio.h>
#include<math.h>

float calculatedistance(float x1,float x2,float y1,float y2){
    float xaxis=(x2-x1)*(x2-x1);
    float yaxis=(y2-y1)*(y2-y1);

    float distance=sqrt(xaxis+yaxis);
    printf("The Distance is: %.2f\n",distance);

}

int main(){
    float x1,x2,y1,y2;
    float distance;

    printf("Enter First X-Cordinate: ");
    scanf("%f",&x1);

    printf("Enter Second X-Cordinate: ");
    scanf("%f",&x2);

    printf("Enter First Y-Cordinate: ");
    scanf("%f",&y1);

    printf("Enter First Y-Cordinate: ");
    scanf("%f",&y2);

    calculatedistance(x1,x2,y1,y2);



}