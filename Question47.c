// left rotation by k elements 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {scanf("%i",&arr[i]);}

    int rotate[n];
    int tracker=0,k;
    printf("Enter k : ");
    scanf("%i",&k);
        k=k%n;
    for(int i=k;i<n;i++){
        rotate[tracker++]=arr[i];
    }

    for(int i=0;i<k;i++){
         rotate[tracker++]=arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%i ",rotate[i]);
    }
    return 0;
}
