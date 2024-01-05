#include <stdio.h>

int main() {
    FILE *fptr; // File pointer for file handling
    char data[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    // Open the file in write mode
    fptr = fopen("output.txt", "w");

    // Check if the file is successfully opened
    if (fptr == NULL) {
        printf("File could not be opened.\n");
        return 1; // Indicates an error
    }

    // Store data in the file
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        fputc(data[i], fptr);
    }

    // Close the file
    fclose(fptr);

    // Open the file in read mode
    fptr = fopen("output.txt", "r");

    // Check if the file is successfully opened
    if (fptr == NULL) {
        printf("File could not be opened.\n");
        return 1; // Indicates an error
    }

    // Read and print the content of the file
    int ch;
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fptr);

    return 0; // Indicates success
}
