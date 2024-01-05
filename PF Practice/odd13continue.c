#include <stdio.h>
int main()
{
    int odd,i;
    
    for(i=1;i<=20;i++){
        
        if(i%2!=0){
            
            if(i==13){
                
                continue;
            }
            
            printf("%d ",i);
          
        }
    }
}