#include<stdio.h>
int main(){
    struct book
    {
       int noOfpages;
       float price;
       char name[30];
    } one,two,three;

    one.noOfpages=200;
    one.price=420.5;
    one.name[0] = 'S';
    one.name[1] = 'e';
    one.name[2] = 'v';
    one.name[3] = 'e';
    one.name[4] = 'n';
    one.name[5] = ' ';
    one.name[6] = 'D';
    one.name[7] = 'a';
    one.name[8] = 'y';
    one.name[9] = 's';
    one.name[10] = '\0';

    two.noOfpages=250;
    two.price=500.5;
   two.name[0] = 'F';
    two.name[1] = 'a';
    two.name[2] = 'i';
    two.name[3] = 'r';
    two.name[4] = 'y';
    two.name[5] = ' ';
    two.name[6] = 'T';
    two.name[7] = 'a';
    two.name[8] = 'l';
    two.name[9] = 'e';
    two.name[10] = '\0';

    three.noOfpages=500;
    three.price=700.97;
    three.name[0] = 'R';
    three.name[1] = 'i';
    three.name[2] = 'c';
    three.name[3] = 'h';
    three.name[4] = ' ';
    three.name[5] = 'D';
    three.name[6] = 'a';
    three.name[7] = 'd';
    three.name[8] = '\0';

printf("First Book\n");
printf("Name\t   | Book Price  | No Of Pages\n");
for(int i=0;i<30;i++){
    if(one.name[i]=='\0'){
    break;
    }
    else{
printf("%c",one.name[i]);
    }
}

printf("\t%.3f\t",one.price);
printf("\t%d",one.noOfpages);

printf("\n");

for(int i=0;i<30;i++){
    if(two.name[i]=='\0'){
    break;
    }
    else{
printf("%c",two.name[i]);
    }
}

printf("\t%.3f\t",two.price);
printf("\t%d",two.noOfpages);

printf("\n");

for(int i=0;i<30;i++){
    if(three.name[i]=='\0'){
    break;
    }
    else{
printf("%c",three.name[i]);
    }
}

printf("\t%.3f\t",three.price);
printf("\t%d",three.noOfpages);


}
