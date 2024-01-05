#include<stdio.h>
int main(){

int array[100];
int sum=0,i,j,n;
float avg=0;

printf("Enter number of terms you want to Get sum & Average = ");
scanf("%d", &n);

printf("Enter Number for Sum and Average\n");

for(i=0;i<n;i++){

    printf("Element %d: ",i);
    scanf("%d", &array[i]);

    sum+=array[i];

}

printf("The Sum of All Elements is = %d\n", sum);

    avg=(float)sum/n;

printf("The Average of All Elements is = %.2f\n",avg);

}