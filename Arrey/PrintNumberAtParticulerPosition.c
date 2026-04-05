#include<stdio.h>
void display(int no_inputs){
    int nums[no_inputs];
    if(no_inputs<7){
        printf("Enter valid numbs");
    }
    for(int i = 0; i<no_inputs; i++){
        printf("Enter %d: ",i+1);
        scanf("%d",&nums[i]);
    }
    printf("%d\n",nums[4]);
    printf("%d\n",nums[6]);
}
int main(){
    printf("Enter num > 6\n");
    int no_inputs;
    scanf("%d",&no_inputs);
    display(no_inputs);
}