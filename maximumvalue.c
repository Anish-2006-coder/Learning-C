#include <stdio.h>
#include <math.h>
int main()
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int smallest = numbers[0];
   for(int i = 0; i<10; i++){
        if (numbers[i]<=smallest){
            smallest=numbers[i];
        }
}
 printf("Smallest number is %d", smallest);
}