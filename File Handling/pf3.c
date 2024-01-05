#include<stdio.h>
int main(){

    FILE *file;
    char names[50];

    file=fopen("names.txt","r");

    while (fgets(names,sizeof(names),file) != NULL) {
        printf("%.4s\n", names);
    }

}