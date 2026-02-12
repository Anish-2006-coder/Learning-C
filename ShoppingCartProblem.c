#include<stdio.h>
#include<string.h>
int main(){
    char item[50] = "";
    float price = 0.0f;
    int quentity = 0;
    float total = 0.0f;
    char currency = '$';
    printf("What you want to purches?: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';
    printf("What is the price of each?: ");
    scanf("%f",&price);
    printf("How much quentity you want?: ");
    scanf("%d",&quentity);
    printf("You want %s \n",item);
    printf("Price of Each is %.2f\n",price);
    printf("Quentity you want %d\n",quentity);
    total = price*quentity;
    printf("Total price is %.2f%c\n",total,currency);



}
