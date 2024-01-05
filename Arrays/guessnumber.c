#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int randomno(){

    sleep(1);
    srand(time(NULL));
  return rand()%100+1;

}

int main(){
int user_guess,num;

num=randomno();

printf("Enter Your Guess [1-100] = ");

do{
scanf("%d",&user_guess);

 if (user_guess < num) {
            printf("Your Guess is Less than Random Number\n");
        } else if (user_guess > num) {
            printf("Your Guess is Greater than Random Number\n");
        } else {
            printf("Your Guess is Correct!\n");
            break;
        }

printf("Guess Again = ");


}

while(1);


}

