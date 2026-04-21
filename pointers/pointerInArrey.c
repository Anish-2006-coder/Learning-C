#include<stdio.h>
int main(){
    int arr[]={3,5,7,8,3,7};
    int *ptr=&arr[0];
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));  //We can acces the value of particuler value with arthmitic operations on Arrey. 
    printf("%d\n",sizeof(arr[0]));
    for(int i=0;i<6;i++){
        printf("%d ",*ptr);
        ptr++;
    }
}