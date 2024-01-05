#include<stdio.h>
int main(){
    int n1,n2;
    int factors1,factors2;
    printf("Enter two Number to Check the Friendly Pair: ");
    scanf("%d %d",&n1,&n2);

  for(int i=1;i<=n1;i++){
    if(n1%i==0){
        factors1+=i;
    }
    else{}
  }

    for(int i=1;i<=n2;i++){
    if(n2%i==0){
        factors2+=i;
    }
    else{}
  }


  if(factors1%n1==factors2%n2){
    printf("%d and %d are Friendly pair\n",n1,n2);
  }
  
  else{
    printf("%d and %d are not Friendly pair\n",n1,n2);
  }

}