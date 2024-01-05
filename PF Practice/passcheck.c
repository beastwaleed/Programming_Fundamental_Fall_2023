#include<stdio.h>
int main(){
    char fixedpass[6] = {'s', 'e', 'c', 'r', 'e', 't'};
    char userarray[6];
int correct;

for(int i=0;i<=3;i++){
    
    if(i==3){
        
        printf("Your System is Hacked because You Tried 3 times without Knowing the Password\n");
        break;
        
    }
correct=0;
printf("Enter the Password for Login\n Hint:[Password is of 6 Character]\nEnter Password: ");

for(int j=0;j<6;j++){
scanf(" %c", &userarray[j]);

    if(userarray[j]==fixedpass[j]){
    correct++;

}

}

if(correct == 6){
printf("Correct Password! You Hacked NASA\n");
break;
}

else{

    printf("Wrong Password! Try Again \n");
}


}
return 0;
}