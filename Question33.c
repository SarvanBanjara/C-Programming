//Write a  program to find the LCM of two numbers
#include<stdio.h>
int main() 
{
    int n1,n2;
    printf("Enter the no. :");
    scanf("%i %i",&n1,&n2);
   int mul=0;
    while(1)
    {
        mul += n1 ;
        if(mul%n1==0 && mul%n2==0)
        break;

    }
    printf("LCM is %i",mul);



return 0;
}