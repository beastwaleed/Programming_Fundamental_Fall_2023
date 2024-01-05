#include<stdio.h>
int main(){

int students;
int rollno[students];
char name[students];
char fathername[students];
int class[students];

printf("Enter Number of Students: ");
scanf("%d",&students);

for(int i=0;i<students;i++){
    printf("Enter Student Number: ");
    scanf("%d",&rollno[i]);

    printf("Enter name: ");
    scanf(" %[^\n]s",&name[i]);

    printf("Enter Father's name: ");
    scanf(" %[^\n]s",&fathername[i]);

    printf("Enter Class: ");
    scanf("%d", &class[i]);

    printf("\n");
    printf("\n");

}

printf("\nStudent Information:\n");
    printf("Student Number | Name | Father's Name | Class\n");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < students; i++) {
        printf(" %d | %s | %s | %d\n", rollno[i], name[i], fathername[i], class[i]);
    }

    return 0;
}
