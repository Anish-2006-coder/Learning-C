#include<stdio.h>
void happyBirthday//(char name[],int age) 
(char birthdayBoy[],int AgeOfBirthdayBoy)
{
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday dear %s\n",birthdayBoy);
    printf("Happy birthday to you\n");
    printf("you are now %d year old\n",AgeOfBirthdayBoy);
    printf("\n");

}

int main(){
    char name[]="Anish bhagat";
    int age = 50;

    happyBirthday(name,age);
    happyBirthday(name,age);
    return 0;
    
}
