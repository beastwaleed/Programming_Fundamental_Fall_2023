#include <stdio.h>

void displayArray(int *p) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p);
        p++;
    }
}

int main() {
    int age = 40;
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];

    displayArray(p);

    return 0;
}
