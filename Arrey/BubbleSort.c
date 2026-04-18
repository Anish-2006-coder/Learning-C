#include<stdio.h>
int main(){
    int limit;
    scanf("%d",&limit);
    int nums[limit];
    for(int i=0;i<limit;i++){
        nums[i];
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<limit;i++){
        for(int j=i+1;j<limit;j++){
            if (nums[i]>nums[j]){
                int a=nums[j];
                nums[j]=nums[i];
                nums[i]=a;
            }
        }
    }
    for(int i=0;i<limit;i++){
        printf("%d ",nums[i]);
    }

}