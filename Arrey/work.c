#include<stdio.h>
int main(){
    int n;
    int k=1;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        for(int j=1;j<=n-i+1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}