#include<stdio.h>
void CarServies(int no_of_cars){
    int calculatins[no_of_cars][2];
    for(int i = 0; i<no_of_cars; i++){
        for(int j = 0; j<2; j++){
            scanf("%d",&calculatins[i][j]);
        }
    }
    for(int i = 0; i<no_of_cars; i++){
        for(int j = 0; j<2; j++){
            printf("%d ",calculatins[i][j]);
        }
         if(calculatins[i][1]<=3){
                printf("%.2f\n",30.0);
            }
            else if(calculatins[i][1]==24){
                printf("%.2f\n",80.0);
            }
            else{
                printf("%.2f\n",30.0+(calculatins[i][1]-3)*5.0);
            }
        
    }
}
int main(){
    int no_of_cars;
    scanf("%d",&no_of_cars);
    CarServies(no_of_cars);
}