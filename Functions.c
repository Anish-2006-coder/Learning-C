// #include<stdio.h>
// void happyBirthday//(char name[],int age) 
// (char birthdayBoy[],int AgeOfBirthdayBoy)
// {
//     printf("Happy birthday to you\n");
//     printf("Happy birthday to you\n");
//     printf("Happy birthday dear %s\n",birthdayBoy);
//     printf("Happy birthday to you\n");
//     printf("you are now %d year old\n",AgeOfBirthdayBoy);
//     printf("\n");

// }

// int main(){
//     char name[]="Anish bhagat";
//     int age = 50;

//     happyBirthday(name,age);
//     happyBirthday(name,age);
//     return 0;
    
// }
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main(){
    int a=10,b=20;
    printf("Result %d \n",add(a,b));
    printf("Result %d \n",sub(a,b));
}
int add(int a, int b){
    int sum = a+b;
    return sum;
}
int sub(int a, int b){
    int sub = a-b;
    return sub;
}


