#include<stdio.h>
#include<stdbool.h>
int main(){
    int temp = 0;
    printf("Enter Temperature in Celciues: ");
    scanf("%d",&temp);
    bool isSunny = false;
    if (temp>0&&temp<30){
        printf("Temperature is GOOD outside.\n");
    }
    else{
        printf("Temperature is NOT GOOD outside.\n");
    }
    if(!isSunny){
        printf("Day is sunny");
    }

}