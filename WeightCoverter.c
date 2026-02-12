#include<stdio.h>
int main(){
    // Weight Converter
    printf("Weight Converter\n");
    int choice=0;
    float weight=0.0f;
    printf("1. kilogram to Pound\n");
    printf("2. Pound to Kilogram\n");
    scanf("%d",&choice);
    if (choice==1){
        printf("Enter weight in kilogram\n");
        scanf("%f",&weight);
        float pound = weight*2.20;
        printf("%.2f kilogram in pound is %.2f",weight,pound);
    }
    else if(choice==2){
        printf("Enter weight in pond\n");
        scanf("%f",&weight);
        float kilogram = weight/2.20;
        printf("%.2f pound in kilogram is %.2f",weight,kilogram);

    }
    else{
        printf("Enter Valid choice 1 or 2");
    }

}