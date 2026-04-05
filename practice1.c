#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
     if(a%2==0){
        goto lable1;
    }    
    else{
        goto lable2;
    }
    lable1:
        printf("%d is an even number.",a);
        return 0;
        
    lable2:
        printf("%d is an odd number.",a);
        return 0;
    
        
   
    
}