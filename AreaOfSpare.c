#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    float radius = 0.0f;
    const float PI = 3.14;
    float Area = 0.0f;
    float TSA = 0.0f;
    float Volume = 0.0f;
    printf("Enter the radius of sphare: ");
    scanf("%f",&radius);
    Area = 4*PI*pow(radius,2);
    TSA = 6*PI*pow(radius,2);
    Volume =(4.0/3.0)*PI*pow(radius,3);
    printf("Radius of Sphare %.2f\n",radius);
    printf("Area of sphare %.2f\n",Area);
    printf("TSA of Sphare %.2f\n",TSA);
    printf("Volume of Sphare %.2f\n",Volume);



}