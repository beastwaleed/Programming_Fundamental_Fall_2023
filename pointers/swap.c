#include<stdio.h>

int swap(int *pa,int *pb, int *pc){
    int temp=*pa;
    *pa=*pc;
    int temp2=*pb;
    *pb=temp;
    *pc=temp2;
    printf("%d %d %d\n",*pa,*pb,*pc);

}

int main(){

    int a=5,b=2,c=3;
    int *pa,*pb,*pc;

    pa=&a;
    pb=&b;
    pc=&c;

    swap(pa,pb,pc);
}