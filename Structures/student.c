#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    char dept[20];
    char course[20];
    int joiningyear;

};

void check(struct student s1,struct student s2){
    for(int i=0;i<30;i++){
        
    if(s1.dept[i]==s2.dept[i]){
        printf("Student 1 and 2 Are In Same Department\n");
        break;
    }

    else{ printf("Student 1 and 2 Are not In Same Department\n");
    break;
    }
    }
}
int main(){
   struct student s1,s2; 

    printf("\nEnter Details for First Student\n");

    printf("Enter Roll No of Student 1: ");
    scanf("%d",&s1.rollno);

    printf("Enter Name of Student 1: ");
    scanf(" %[^\n]%c",&s1.name); 

    printf("Enter Department of Student 1: ");
    scanf(" %[^\n]%c",&s1.dept);

    printf("Enter Course of Student 1: ");
    scanf(" %[^\n]%c",s1.course);

    printf("Enter Joining Year of Student 1: ");
    scanf("%d",&s1.joiningyear);

    printf("\nEnter Details for Second Student\n");

    printf("Enter Roll No of Student 1: ");
    scanf("%d",&s2.rollno);

    printf("Enter Name of Student 1: ");
    scanf(" %[^\n]%c",&s2.name); 

    printf("Enter Department of Student 1: ");
    scanf(" %[^\n]%c",&s2.dept);

    printf("Enter Course of Student 1: ");
    scanf(" %[^\n]%c",&s2.course);

    printf("Enter Joining Year of Student 1: ");
    scanf("%d",&s2.joiningyear);

   check(s1,s2);
}
