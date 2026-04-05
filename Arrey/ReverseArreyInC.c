#include <stdio.h>
int main()
{
    int limit;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &limit);
    int numbers[limit];
    for (int i = 0; i < limit; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Before Changing: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    int a = limit - 1;
    for (int i = 0; i < limit; i++)
    {

        for (int j = (limit - 1); j >= 0; j--)
        {
            numbers[i] = numbers[a];
            break;
        }
        a--;
    }
    printf("After Changing: ");
    for (int i = 0; i < limit; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
