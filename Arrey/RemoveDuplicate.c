#include <stdio.h>
int main()
{
    int n, k = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for(int l=j;l<n-1;l++){
                    arr[l]=arr[l+1]; //we just had replace the current index value with next index value and decress tha size
                }
                n--;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
