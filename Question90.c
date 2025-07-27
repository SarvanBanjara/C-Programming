//to perform selection sort 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        for(int i=n-1;i>0+j;i--)
        {
            if(arr[i]<arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
        }
    }
for(int i=0;i<n;i++){
    printf("%i ",arr[i]);
}

    return 0;
}