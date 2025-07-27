#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf(" N : ");
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {sum=sum+i;}
    printf("The sum is %i and average is %.1f.",sum,(float)sum/n);
    return 0;
}