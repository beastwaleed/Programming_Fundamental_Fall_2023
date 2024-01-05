#include<stdio.h>

float balltoOvers(){
    int balls;
    printf("Enter The Balls Bowled by a Bowler: ");
    scanf("%d",&balls);

    int overs = (int) (balls/6.0); 
   
    float remballs =balls-(overs*6.0);

printf("%d Overs and %g Balls were bowled by bowler\n",overs,remballs);
    
}

int main(){
balltoOvers();
return 0;
}