#include<stdio.h>
#include<windows.h>
int main(){
    int a,b;
    printf("Enter number os rows: ");
    scanf("%d",&a);
    printf("\n");
    printf("Enter number of columns: ");
    scanf("%d",&b);
    printf("\n");
    for(int i=0;i<a;i++){
        for (int j =0;j<b;j++){
            printf("@");
        }
        Sleep(1000);
        printf("\n");

    }


}