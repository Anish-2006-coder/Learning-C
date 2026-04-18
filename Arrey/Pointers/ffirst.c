#include<stdio.h>
int main(){
    int val=45;
    int *ptr=&val;
    printf("Value of a %d\n",*ptr);
    printf("Address of val %p\n",&val);
    printf("Address of val is %p\n",ptr);
    printf("Address of pointer is %p\n",&ptr);
}