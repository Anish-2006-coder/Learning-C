#include<stdio.h>
int main(){
    int limit;
    printf("Enter how many numbers you want to add: ");
    scanf("%d",&limit);
    int numbers[limit];
    for (int i = 0; i < limit; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }   
    long long int sum=0;
    for (int i =0; i<limit;i++){
        sum+=numbers[i];
    }
    printf("%lld",sum);
}