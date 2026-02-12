// #include<stdio.h>
// int k = 34;
// int add(int x, int y){
//     int result = x+y+k;
//     return result;
// }
// int main(){
//     int x = 10;
//     int y = 100;
//     // int k =21;  
//     int result = add(x,y);
//     printf("%d\n",result);
//     printf("%d",k);
// }
// One function can't read the variable define in othe function that's why hear both result does not counter each other both result varibale save in diffrent file location.
// And the k varible which is define out side the function is globale varible which can be acces by any of the functions
// In case of local and globle local will be prefered.
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("%d divisible by 5",a);
    }
}
