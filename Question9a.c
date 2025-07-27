#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a = ");
    scanf("%i",&a);
    printf("b = ");
    scanf("%i",&b);
    c=a;
    b=c;
    a=b;
    printf(" a = %i and b = %i \n",a,b);
    return 0;
}