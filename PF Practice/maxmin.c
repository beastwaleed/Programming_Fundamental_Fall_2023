#include<stdio.h>
int main(){

int num,large,small;

 printf("Enter an integer (-99 to end): ");
        scanf("%d", &num);
        
if (num ==-99){
        printf("No numbers were entered.\n");
        return 0;
    } 
    else{
    large = small = num;
    }    

while (1) {
        printf("Enter an integer (-99 to end): ");
        scanf("%d", &num);

        // Check if -99 is entered to end the loop
        if (num == -99) {
            break;
        }

        // Update largest and smallest
        if (num > large) {
            large = num;
        } else if (num < small) {
            small = num;
        }
    }

printf("Largest Number is %d\n",large);
printf("Smallest Number is %d\n",small);

return 0;
}