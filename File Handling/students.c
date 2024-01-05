// C program to read name and marks of n number of students and store them in a file.


#include<stdio.h>
int main(){

    int marks,students;
    char name[50];

    FILE *fptr;
    fptr=fopen("students.txt","w");

    printf("Enter Number of Students: ");
    scanf("%d",&students);

    if(fptr==NULL){
            printf("File doesnot exist\n");
        }

    for(int i=0;i<students;i++){

        printf("Enter Name of Student %d: ",i+1);
        scanf("%s",name);

         printf("Enter marks: ");
         scanf("%d",&marks);
        
        fprintf(fptr,"\nName: %s | Marks: %d",name,marks);
    }

}