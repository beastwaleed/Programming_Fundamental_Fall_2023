//calculate profit or loss.
#include<stdio.h>
int main(){

    int sellingprice;
    int costprice;
    int profit;
    int loss;

    printf("Enter the Cost Price of Your Product: ");
    scanf("%d", &costprice);

    printf("Enter the Selling Price of Your Product: ");
    scanf("%d", &sellingprice);

    profit=sellingprice-costprice;
    if(profit>0){
        printf("Your Profit is %d\n",profit);
    }

    else{
        loss=profit;
        printf("Unfortunately You got Loss of %d on Your Product\n", loss);
        }

}