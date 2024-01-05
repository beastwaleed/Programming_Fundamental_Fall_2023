#include<stdio.h>
int main(){

    char name[50];
    FILE *file;
    file= fopen("test1.txt","w");

    for(int i=0;i<1;i++){
        printf("Enter a Name: ");
        scanf("%[^\n]%*c",name);
        fprintf(file,"%d. %s\n",i+1,name);
    }
    fclose(file);

    return 0;
    }
