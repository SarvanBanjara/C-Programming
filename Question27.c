//Write a program to print the power of a raised to the power of b.
#include<stdio.h>
int main()
{ int a,b;
printf("a : ");
scanf("%i",&a);
printf("b : ");
scanf("%i",&b);
int result=1;
for(int i=1;i<=b;i++)
{
    result=result*a;
}
printf("%i^%i = %i",a,b,result);


    return 0;
}