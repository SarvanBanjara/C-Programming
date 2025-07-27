#include <stdio.h>
int main()
{
    int km;
    printf("Enter the KPH :");
    scanf("%i", &km);
    printf("Miles per hour is %.1f \n", 0.621371 * km);
    return 0;
}