#include<stdio.h>
int main(){
    char name[30];
    char id[8];
    float cgpa;

    FILE *fptr;
    fptr=fopen("firstfile.txt","w");

    printf("Enter Your Name: ");
    scanf("%[^\n]%*c",&name);
    fprintf(fptr,"%s\n",name);
  
    printf("Enter Your Roll No: ");
    scanf("%[^\n]%*c",&id);
    fprintf(fptr,"%s\n",id);

    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%.2f\n",cgpa);

    fclose(fptr);

}