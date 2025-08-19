//Write a program to print the sum of all factors of a number
#include<stdio.h>
int main()
{ int n , sum=0;

printf("N : ");
scanf("%i",&n);

for(int i=1;i<=n/2;i++)
{  
    if(n%i==0)
    {sum=sum+i;
    printf("%i + ",i);}
}
    printf("%i = %i.\n",n,sum+n);


    return 0;
}