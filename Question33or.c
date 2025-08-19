//Write a  program to find the LCM of two numbers
#include<stdio.h>
int main() 
{

   int a,b;
   printf("Enter two no. : ");
   scanf("%i %i",&a,&b);
   int lcm=0;
    for(int i=a;i<=a*b;i+=a)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }

    }printf(" The LCM of %i and %i is %i",a,b,lcm);



return 0;
}