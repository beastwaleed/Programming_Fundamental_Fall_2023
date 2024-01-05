//Rock Paper Scissor
#include<stdio.h>
int main(){


    char player1[20];
    char player2[20];
    int choice1;
    int choice2;
    char playmore;

    printf("Enter the Name of Player 1: ");
    fgets(player1,sizeof(player1),stdin);

    printf("Enter the Name of Player 2: ");
    fgets(player2,sizeof(player2),stdin);


    do{

     printf("%sTurn", player1);
     printf("\n");
     printf("Enter Your Choice [Rock=1, Paper=2, Scissors= 3]:" );
     scanf("%d" ,&choice1);
     printf("\n");

     printf("%sTurn", player2);
     printf("\n");
     printf("Enter Your Choice [Rock=1, Paper=2, Scissors= 3]:" );
     scanf("%d" ,&choice2);
     printf("\n");



        if(choice1==1 && choice2==1){
            printf("Match Draw\n");
        }

        if(choice1==3 && choice2==3){
            printf("Match Draw\n");
        }

        if(choice1==1 && choice2==2){
            printf("%s Won\n", player2);
        }

        if(choice1==2 && choice2==2){
         printf("Match Draw\n");
        }

        if(choice1==2 && choice2==3){
            printf("%s Won\n",player2);
        }

        if(choice1==1 && choice2==3){
            printf("%s Won\n", player1);
        }

        if(choice1==2 && choice2==1){
            printf("%s Won\n", player1);
        }

        if(choice1==2 && choice2==3){
            printf("%s Won\n", player2);
        }

        if(choice1==3 && choice2==1){
            printf("%s Won\n", player2);
        }

        if(choice1==3 && choice2==2){
            printf("%s Won\n", player2);
        }

     printf("Want to Play more [Press Y/y for Yes or N/n for No]: ");
        scanf(" %c", &playmore);

    }
 

    while(playmore=='y' || playmore=='Y');


}