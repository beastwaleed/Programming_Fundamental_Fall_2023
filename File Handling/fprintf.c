#include<stdio.h>
int main(){

FILE *file;
char name[10];

file= fopen("name.txt","w");

    printf("Enter Your Name with one space after each element\n");

    for(int i=0;i<10;i++){
    
    scanf("%[^\n]%*c",&name[i]);
    fprintf(file,"%c ",name[i]);
          }
    

    }

    fclose(file);

}