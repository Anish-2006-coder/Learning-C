#include<stdio.h>
int main(){
    int choice=2;
    printf("Enter num between 1-7: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Monday");
            break;
        case 2 :
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Enter number between 1 to 7: ");  
            break;          
            
    }
}