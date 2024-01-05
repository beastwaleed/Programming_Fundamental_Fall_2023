#include<stdio.h>
struct sum
{
    int a;
    int b;
};

int add(struct sum *obj){
    int a = obj->a;
    int b = obj->b;
    return a+b;
}

int main(){
    struct sum s1={6,7};
    int c=add(&s1);
    printf("%d ",c);

}