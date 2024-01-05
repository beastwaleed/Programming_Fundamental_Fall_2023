#include<stdio.h>

int main(){
    int a = 5873;
    int *ptr = &a;
    int arr[4];

    for(int i=0;i<4;i++){
        arr[i] = *ptr % 10;
        *ptr = *ptr / 10;
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ",arr[i]);

    }

    return 0;
}
