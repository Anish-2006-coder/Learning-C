#include<stdio.h>
int main(){
    int a,b;
    char sym;
    scanf("%d %d %c",&a,&b,&sym);
    switch(sym){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '%':
            printf("%d",a%b);
            break;
        default:
            printf("out of range");
            break;
}
            
}