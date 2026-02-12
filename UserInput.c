#include <stdio.h>
#include <string.h>
int main(){
    // int Science = 0; 
    // int SST = 0;
    // int Maths = 0;
    // int English = 0;
    int Marks = 0;
    float GPA = 0.0f;
    char Grade = '\0';
    char Name[30] ="";
    // printf("Marks in Science ");
    // scanf("%d",&Science);
    // printf("Marks in SST ");
    // scanf("%d",&SST);
    // printf("Marks in Maths ");
    // scanf("%d",&Maths);
    // printf("Marks in Englis ");
    // scanf("%d",&English);
    printf("Marks in Marks ");
    scanf("%d",&Marks);
    printf("Enter Your GPA ");
    scanf("%f",&GPA);
    printf("Enter Your Grade ");
    scanf(" %c",&Grade);
    getchar();  // used to just clear the input buffer
    printf("Enter Your Name ");
    // scanf("%s",&Name);  
    // we can't this to take input as string because it can not read any white space so we use diffrent function.
    fgets(Name,sizeof(Name),stdin);  // In this also when we hit enter their is a new line charcter which progrsm takes and leave a line.  To over come this problem we use we use some built in function which set "\n" to "\0" for that we need to use a header file #include<string.h>
    Name[strlen(Name)-1]='\0';
    // printf("%d",Science);
    // printf("%d",SST);
    // printf("%d",Maths);
    // printf("%d",English);
    printf("%s\n",Name);
    printf("%d\n",Marks);
    printf("%f\n",GPA);
    printf("%c\n",Grade);
    // printf("%s\n",Name);
    return 0;
}