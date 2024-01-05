#include<stdio.h>
int main(){

FILE *file;
char data[6]={'W','A','L','E','E','D'};

file= fopen("waleed.txt","w");

    for(int i=0;i<6;i++){
        fputc(data[i],file);
    }



}