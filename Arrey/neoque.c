
#include<stdio.h>
int main(){
    int r,c,tar_c,a;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }  
    }
    scanf("%d",&tar_c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==tar_c){
                for(int k=1;k<c;k++){
                    if(arr[i][j]>arr[i][k]){
                        a=arr[i][j];
                        arr[i][j]=arr[i][k];
                        arr[i][k]=a;
                    }
                }
            }
                }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}