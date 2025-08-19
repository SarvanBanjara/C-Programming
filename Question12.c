//Write a  program to find whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year:");
    scanf("%i",&a);
    if(a%400==0)
    {printf("%i is a leap year.\n",a);}
    else if(a%100!=0 && a%4==0)
    {printf("%i is a leap year.\n",a);}
    else{printf("%i is not a leap year.",a);}
    return 0;
}
