#include<stdio.h>

int main() {
    int count = 0;
    
    for (int j = 2; count < 10; j++) {
        int prime = 0; // Reset prime count for each number
        for (int i = 2; i <= j; i++) {
            if (j % i == 0) {
                prime++;
            }
        }

        if (prime == 1) {
            printf("%d ", j);
            count++;
        }
    }

    printf("\n");

    return 0;
}
