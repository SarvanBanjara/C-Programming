//Write a C program to print Fibonacci series up to Nth terms
#include<stdio.h>
int main() 
{
int n;
printf("Enter N :");
scanf("%i",&n);
int prev = 0;int curr=1;int next;
printf("%i  %i  ",prev,curr);
for(int i=1;i<=n;i++)
{
    next=prev+curr;
    printf("%i  ",next);
    prev=curr;
    curr=next;
}
return 0;
}