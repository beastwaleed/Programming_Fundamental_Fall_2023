#include<stdio.h>

int main(){
    
    int score,updatescore,balls,wickets,choice;
    char exit;
    
    for( ; ; ) {
            printf("Enter 1 for Showing Runs Program \n");
         printf("Enter 2 for Showing Wickets Program \n");
         printf("Enter 3 for Exit Menu \n");
        printf("Enter your choice from [1 to 3] = ");
        scanf("%d",&choice);
        
        for(balls=1;balls<301;balls++)
    
        if (choice==1){
            printf("Enter Runs from 1 to 6 = ");
                 scanf("%d",&score);
            updatescore+=score;
             printf("Updated Score = %d runs and %d balls\n\n",updatescore,balls);
            
            printf("Enter 1 for Showing Runs Program \n");
           printf("Enter 2 for Showing Wickets Program \n");
         printf("Enter 3 for Exit Menu \n");
            printf("Enter your choice from [1 to 3] = "); 
            scanf("%d",&choice);
            
            
            }
    
        if (choice==2){
            for(wickets=0;wickets<11;wickets++){
                
            printf("Enter the Wicket = ");
            scanf("%d",&wickets);
           printf("Wickets are = %d\n", wickets);
            
            printf("Enter 1 for Showing Runs Program \n");
            printf("Enter 2 for Showing Wickets Program \n");
         printf("Enter 3 for Exit Menu \n");
                printf("Enter your choice from [1 to 3] = "); 
            scanf("%d",&choice);
            }
            
        }
            
        if (choice==3){
            
            printf("Enter n to Exit the program = ");
            scanf(" %c",&exit);
            if(exit=='n' || exit=='N'){
             printf("Program Exited\n");
            }
            break;
            
        }
        
        
        }
            }
            
        
     
            
        
    