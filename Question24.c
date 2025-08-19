//Write a program to print the factorial of a number
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("n:");
    scanf("%i",&n);
    
    for (int i=1;i<=n;i++)
    {  fact=fact*i; }
    printf(" %i! = %i",n,fact);
    return 0;
}