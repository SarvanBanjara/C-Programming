//Accept marks of 4 subjects and calculate percentage if percentage is below 35% - F ,below 45% - D ,  below 55% - C , below 75% - B , above 75% - A 
#include<stdio.h>
int main()
{
    int m,s,e,h;
    printf("Mathematics = ");
    scanf("%i",&m);
    printf("Science = ");
    scanf("%i",&s);
    printf("English = ");
    scanf("%i",&e);
    printf("Hindi = ");
    scanf("%i",&h);
    
    float a=(m+s+e+h)/4;
    if(a<=35){printf("E (Very Poor)");}
    else if(a<45){printf("D (Poor)");}
    else if(a<55){printf("C (Average)");}
    else if(a<75){printf("B (Good)");}
    else if(a>100){printf("Enter the marks correctly.");}
    else{printf("A (Expectations)");}
    return 0;

}