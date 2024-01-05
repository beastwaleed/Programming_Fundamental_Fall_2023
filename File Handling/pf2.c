#include <stdio.h>

int main() {
    FILE *file;
    char data;

   file = fopen("firstfile.txt", "r");

while(1){
    data=fgetc(file);
    if(data=EOF) break;
}
    fclose(file);
    return 0;
}
