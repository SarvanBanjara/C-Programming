//Write a program to accept the height of a person in centimeter and categorize the person
// according to their height if below 150 he is dwarf if above 150 and below 200 average and
// above 200 tall
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the height : ");
    scanf("%i",&a);
    if(a<150){printf("Chotu Chai lana.");}
    else if(a>=150 && a<=200){printf("Average Height.");}
    else {printf("Tall (lambu)");}
return 0;

}












































































































