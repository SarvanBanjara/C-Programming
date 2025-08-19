//Write a program to read the age of a candidate and determine whether it is eligible
//for casting his/her own vote
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the age :");
    scanf("%i",&a);
    if(a>=18){printf("Go and caste the vote.");}
    else{printf("Ghar me baith ke pogo dekho.");}
    return 0;
    
}
