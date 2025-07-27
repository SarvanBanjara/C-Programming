#include<stdio.h>
int main()
{
    int n;
    printf("n :");
    scanf("%i",&n);
    int flag = -1;
    for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {flag =1;} 
    }
    if(flag==1)
    {printf("%i is a not prime.",n);}
    else{printf("%i is  prime.",n);}
     
     return 0;

}
