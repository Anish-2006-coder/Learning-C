#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int randnum = rand()%100 + 1 ;
    printf("%d",randnum);
    return 0;
}