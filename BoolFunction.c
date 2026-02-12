#include<stdio.h>
#include<stdbool.h>
bool age_check(int age){
    if (age>18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    scanf("%d",&age);
    if (age_check(age)){
        printf("Adult");
    }
    else{
        printf("Child");
    }

}