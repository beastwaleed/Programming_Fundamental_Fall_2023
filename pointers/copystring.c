#include<stdio.h>
int main(){

char string1[100];
char string2[100];

char *ptr1=&string1[0];
char *ptr2=&string2[0];

printf("Enter Anything to Store in String: ");
fgets(string1,sizeof(string1),stdin);

for(int i=0;string1[i]!='\0';i++){
    string2[i]=*ptr1;
    ptr1++;
    ptr2++;
}
printf("String 1[Original String]:\n\t");
 for (int i=0; string1[i]!='\0';i++) {
        printf("%c", string1[i]);
    }
    printf("\n\n");
    
printf("String 2[Copy of String 1]:\n\t");
 for (int i=0; string2[i]!='\0';i++) {
        printf("%c", string2[i]);
    }

return 0;
}