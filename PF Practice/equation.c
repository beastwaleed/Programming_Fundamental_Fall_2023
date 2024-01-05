#include<stdio.h>
#include<math.h>

int main(){
int x;
int res=0;
int sum=0;

printf("Enter Value of x for Equation [1+2x+3x^2+4x^3]: ");
scanf("%d",&x);

for(int i=1;i<5;i++){
    res=(i+1)*pow(x,i);
    sum+=res;
}
printf("%d\n",sum);
}