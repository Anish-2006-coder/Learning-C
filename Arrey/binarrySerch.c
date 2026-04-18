#include<stdio.h>
int BinarySearch(int arry[],int target,int n,int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arry[mid]==target){
            return mid;
        }
        else if(arry[mid]>target){
            high=mid+1;
        }
        else if(arry[mid]<target){
            low=mid-1;
        }
    }
    return -1;
}
int main(){
    int limit;
    scanf("%d",&limit);
    int arry[limit];
    for(int i=0;i<limit;i++){
        scanf("%d",arry[i]);
    }

    int target;
    scanf("%d",&target);
    int n = sizeof(arry)/sizeof(arry[0]);
    int low=0;
    int high=n-1;
    int a = BinarySearch(arry,target,n,low,high);
    if (a!=n){
        printf("Element is found at %d .",a);
    }
    else{
        printf("Element not found");
    }
}