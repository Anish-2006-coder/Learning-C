#include<stdio.h>
int rec(int n){
    if (n==6) return;
    printf("this is %dth time",n);
    rec(n+1);
}
int main(){
    rec(1);

}