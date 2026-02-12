#include<stdio.h>
int square(int num){
    return num*num;
}
int main(){
    int x = square(4);
    int y = square(5);
    int z = square(6);
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);                      
    