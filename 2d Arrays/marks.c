#include<stdio.h>
int main(){
int stdnt;
    
  printf("Enter Number of Students: ");
  scanf("%d",&stdnt);

int marks[stdnt][3];


for(int i=0;i<stdnt;i++){
printf("Enter Marks of Student %d for \tPhysics Chemistry Maths: ",i+1);
scanf("%d %d %d", &marks[i][0], &marks[i][1], &marks[i][2]);

}

printf("Entered Marks\n");
printf("Student\tPhysics\tChemistry\tMaths\n");

 for (int i=0; i<stdnt; i++) {
    printf("%d\t%d\t%d\t\t%d\n", i + 1, marks[i][0], marks[i][1], marks[i][2]);
 }


return 0;
}