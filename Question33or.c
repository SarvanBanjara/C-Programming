#include<stdio.h>
int main() 
{

   int a,b;
   printf("Enter two no. : ");
   scanf("%i %i",&a,&b);
   int lcm=0;
    for(int i=a*b;i>=a;i--)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
        }

    }printf(" The LCM of %i and %i is %i",a,b,lcm);



return 0;
}