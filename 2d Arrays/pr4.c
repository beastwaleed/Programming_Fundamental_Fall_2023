#include<stdio.h>
int main(){

int beverage;
int i=1;
int coffee=0;
int tea=0;
int coke=0;
int orange=0;

printf("Choose Your Favorite Beverage from the Following List\n");
printf("1. Coffee\t2.Tea\t3.Coke\t4.Orange Juice\n");

do{
    printf("Please Input the Favorite beverage of Person # %d Choose 1,2,3 or 4 from the above menu or -1 to exit the program\n",i);
    scanf("%d",&beverage);
        i++;

    if(beverage==1){
        coffee++;
    }

    if(beverage==2){
         tea++;
    }

    if(beverage==3){
        coke++;
    }

    if(beverage==4){
        orange++;
    }

}

while(beverage!=-1);

printf("Beverage \t\t Number of Votes\n");
printf("***********************************\n");
printf("Coffee\t\t\t\t %d\n",coffee);
printf("Tea\t\t\t\t %d\n",tea);
printf("Coke\t\t\t\t %d\n",coke);
printf("Orange Juice\t\t\t %d\n",orange);

}