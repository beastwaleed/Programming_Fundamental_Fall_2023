#include <stdio.h>

int main() {
    FILE *file;
    char data;

   file = fopen("firstfile.txt", "r");

   // while ((data=fgetc(file)) != EOF) {
     for(int i=0;data=fgetc(file)==EOF;i++){
        printf("%c",data);

     }
     

    fclose(file);
    return 0;
}
