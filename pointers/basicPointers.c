#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("%d\n",*ptr); //Value of a by pointers
    printf("%d\n",ptr); //Storage of a by pointer
    printf("%d\n",&ptr);// Storage of pointer
    printf("%d\n",&a); //Storage of a by a
    
}