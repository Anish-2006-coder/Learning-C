#include<stdio.h>
#include<math.h>
int main(){
    float Principal = 0.0f;
    float rate = 0.0f;
    float time = 0;
    int n = 0;
    double CompoundIntrest = 0.0f;
    printf("Enter The Princopal Amount: ");
    scanf("%f",&Principal);
    printf("Enter Rate: ");
    scanf("%f",&rate);
    printf("Enter Time Period: ");
    scanf("%f",&time);
    printf("Enter Number Of Time Compounded: ");
    scanf("%d",&n);
    double store = pow((1+(rate/100*n)),n*time);
    CompoundIntrest = Principal*store;
    printf("Principal amount: %.2f\n",Principal);
    printf("Rate: %.2f\n",rate);
    printf("Time: %.2f\n",time);
    printf("Number of time compounded: %d\n",n);
    printf("Compounded Rest: %.2lf\n",CompoundIntrest-Principal);
    return 0;

}