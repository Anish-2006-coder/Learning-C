#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("%d\n",*ptr); //Value of a by pointers
    printf("%d\n",ptr); //Storage of a by pointer
    printf("%d\n",&ptr);// Storage of pointer
    printf("%p\n",&a); //Storage of a by a

    
    // int arr[]={10,20,30}, *p;
    // p=&arr[0];
    // int i=0;
    // while(i<3){
    //     printf("%d\n",*p);
    //     printf("%d\n",p);
    //     p++;
    //     printf("%d\n",p);
    //     i++;
    // }
    
}