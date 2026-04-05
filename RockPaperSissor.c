#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
int compchoice();
int userchoice(){
    int a;
    printf("1.ROCK\n2.PAPER\n3.SESSIOR\n");
    printf("Enter your choice: ");
    scanf("%d",&a);
    return a;
}

int main(){
    // int b=1;
 while(1){
    int randum = compchoice();
    int choice=userchoice();
    if (choice>3){
        printf("GAME OVER");
        break;
    }
    if(choice==1){
    if (randum==1){
        printf("DRAW both chose rock\n");
    }
    else if(randum==2){
        printf("you rock COMP Paper\n");
        printf("YOU LOSS\n");
    }
    else if(randum==3){
        printf("you rock COMP sessor\n");
        printf("YOU WIN\n");
    }
    }
    if(choice==2){
    if (randum==2){
        printf("DRAW both chose paper\n");
    }
    else if(randum==1){
        printf("you paper COMP rock\n");
        printf("YOU WIN\n");
    }
    else if(randum==3){
        printf("you paper COMP sissor\n");
        printf("YOU LOSS\n");
    }
    }
    if(choice==3){
    if (randum==3){
        printf("DRAW both chose sissor\n");
    }
    else if(randum==1){
        printf("you sissor COMP rock\n");
        printf("YOU LOSS\n");
    }
    else if(randum==2){
        printf("you sissor COMP paper\n");
        printf("YOU WIN\n");
    }
    }
    Sleep(1000);
}
}
int compchoice(){
    srand(time(NULL));
    return (rand()%3)+1;
}