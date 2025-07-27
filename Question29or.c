#include<stdio.h>
int main()
{
    for(int i=1;i<=1000;i++)
    {
        int flag = -1;
        for( int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {flag=1;}

        }
        if(flag==-1)
        {printf("%i\t",i);}
        
        

    }
    return 0;
}