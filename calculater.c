#include<stdio.h>
int Addition(int a,int b){
    return a+b;
}
int Substracton(int a, int b){
    return a-b;
}
int Division(int a, int b){
    return a/b;
}
int Mulctiplication(int a, int b){
    return a*b;
}
int main(){
    int k;
    printf("you want to do calculation 1 for yes any other for no\n");
    scanf("%d",&k);
    while(k==1){
    int a,b,j;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("What you want:\n");
    printf("1 for Addition\n");
    printf("2 for Substraction\n");
    printf("3 for Division\n");
    printf("4 for Mulctiplicatin\n");
    scanf("%d",&j);
    if(j==1){
        printf("%d\n",Addition(a,b));
        
    }
    else if (j==2){
        printf("%d\n",Substracton(a,b));
    }
    else if (j==3){
        printf("%d\n",Division(a,b));
    }
    else if(j==4){
        printf("%d\n",Mulctiplication(a,b));
    }
    else{
        printf("choice is not valid\n");
    }
    printf("you want to do calculation 1 for yes any other for no\n");
    scanf("%d",&k);
    }

}