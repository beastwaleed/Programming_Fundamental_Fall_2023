#include<stdio.h>
int main(){

char name[100]="Do You think is Coding is Fun xd!";
char *ptr=&name[0];
int count=0;

printf("\t\tHardcode Answer of String 'Do You think is Coding is Fun xd!' is: ");
for(int i=0;name[i]!='\0';i++){
    *ptr++;
    count++;
}
printf("%d\n\n",count);

char username[100];
printf("Enter Word or Words to Count the Length of the String: ");
fgets(username,sizeof(username),stdin);
char *userptr;
userptr=&username[0];
int usercount=-1;

for(int i=0;username[i]!='\0';i++){
    *userptr++;
    usercount++;
}  

printf("\t\tUser Prefered Program Answer of String = %s",username);
printf("Length of the String is %d",usercount);

}