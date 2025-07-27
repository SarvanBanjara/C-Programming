#include<stdio.h>
int main()
{
    int a;
    printf("Enter the minutes:");
    scanf("%i",&a);
    printf("The time is %i hrs %i min./n",a/60,a%60);
    
    
    return 0;
    }