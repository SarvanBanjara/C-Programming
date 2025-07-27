#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter the length and breadth:");
    scanf("%i%i",&a,&b);
    printf("Perimeter of rectangle is %i.\n",2*(a+b));
    printf("Area of rectangle is %i",a*b);
     return 0;
}