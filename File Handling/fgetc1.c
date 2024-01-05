#include<stdio.h>
int main(){
    
    char str[50];
    FILE *file;

    file = fopen("test1.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < 1; i++) {
        printf("Enter a Name: ");
        scanf("%[^\n]%*c", str); 
        fprintf(file, "%d. %s\n", i + 1, str); 
    }

    fclose(file);
    return 0;

}
