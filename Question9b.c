// Accept two numbers from user and swap their values without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("a = ");
    scanf("%i",&a);
    printf("b = ");
    scanf("%i",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %i and b = %i",a,b);
    return 0;
}