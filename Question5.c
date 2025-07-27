#include<stdio.h>
int main()
{
    float c ;
    printf("Enter temperature in celsius:");
    scanf("%f",&c);
    printf("Temperature in Farenheit is %.1f \n",(float)(c*9/5)+32);
    return 0;
}