#include <stdio.h>

int main() {
 
int marks=-1,marks2=-2,n;
int stdmark;

printf("Enter Number of Students: ");
scanf("%d",&n);

for(int i=0;i<n;i++){
    printf("Enter Marks of Student No %d: ",i+1);
    scanf("%d",&stdmark);
        if(stdmark>marks){
            marks2=marks;
            marks=stdmark;
        }
        else if(stdmark>marks2 && stdmark<marks){
                marks2=stdmark;
            }
        }

printf("Highest Marks are: %d\n",marks);
printf("Second Highest Marks are: %d\n",marks2);

return 0;
}