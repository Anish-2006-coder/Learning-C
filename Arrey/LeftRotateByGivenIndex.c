#include<stdio.h>
void func(int arr[],int n){
    int index;
    scanf("%d",&index);
    for(int i=0;i<n;i++){
        if (arr[i]==arr[index]){
            for(int j=0;j<=n-index-1;j++){
                int a=arr[j];
                arr[0]=arr[index];
                arr[j+1]=arr[index+j];
                for(int l=index;l<n-index;l++){
                    arr[j+2]=a;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    func(arr,n);
}