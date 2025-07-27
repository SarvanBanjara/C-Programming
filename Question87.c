//  Write a program to find the sum of the first N prime numbers.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=n; i>=2;i--){

        int k=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){ k=1;break; }
        }
        if(k){}
        else{printf("%i + ",i);
        sum +=i;
        }
    }
    printf("1 = %i",sum+1);
    return 0;
}