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