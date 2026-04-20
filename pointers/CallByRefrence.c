#include<stdio.h>
int func(int *ptr){
    return *ptr=60;
    
}
int main(){
    int a=90;
    int *ptr=&a;
    printf("Value of a %d\n",*ptr);
    printf("Value of Address %d\n",ptr);
    func(ptr);
    printf("Value of a %d\n",*ptr);
    printf("Value of Address %d\n",ptr);

}