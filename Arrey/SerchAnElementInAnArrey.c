#include<stdio.h>
int main(){
    int limit;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &limit);
    int numbers[limit];
    for (int i = 0; i < limit; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int search;
    printf("Enter which number you want to search: ");
    scanf("%d",&search);
    for(int i = 0; i<limit; i++){
        if (search==numbers[i]){
            printf("Found %d at %d at index %d",search,i+1,i);
        }
    }
}