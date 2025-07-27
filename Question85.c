//  1 + 1/2 + 1/3 + 1/4 + ... + 1/N
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    float sum=0;
    printf("1 + ");
    for(int i=2;i<=n;i++)
    {  if(i==n){printf("1/%i = ",i);}
      else{  printf("1/%i + ",i);}
        sum=sum+(1.0/i);
    }
    printf("%.1f",sum+1);
    return 0;
}