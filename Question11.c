//Write a  program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%i %i",&a,&b);
    if(a==b)
    {printf("Equal");}
    else{printf("Not Equal");}
    return 0;

}