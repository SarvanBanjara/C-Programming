#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter the time:");
    scanf("%i %i",&h,&m);
    printf("The time in minutes is %i.\n",(60*h)+m);

    return 0;             
}