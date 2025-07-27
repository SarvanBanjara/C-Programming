#include<stdio.h>
int main()
{
    int p , r, t ;
    printf("Enter principal:");
    scanf("%i",&p);
    printf("Enter rate:");
    scanf("%i",&r);
    printf("Enter time:");
    scanf("%i",&t);
    printf("The Simple Interest is %.1f\n",(float)(p*r*t)/100);
    return 0;
}