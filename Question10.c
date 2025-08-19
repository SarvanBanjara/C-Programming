//Write a  program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points)
#include<stdio.h>
int main()
{
    int a,b;
    printf("Total Distance:");
    scanf("%i",&a);
    printf("Fuel Consumed:");
    scanf("%i",&b);
    printf("The average of bike is %.1f km ",(float)a/b);
    return 0;
    

}