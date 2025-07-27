#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%i",&r);
    printf("perimeter of circle is %.1f\n",(float)2*3.14*r);
    printf("Area of circle is %.1f\n",(float)3.14*r*r);
    return 0;
}