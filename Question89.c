// to print in array 1 3 5 7 9 8 6 4 2 
#include<stdio.h>
int main()
{
    int n;
    printf("Entr n :- ");
    scanf("%i",&n);
    int arr[n];
    int l=0,r=n-1;
    int c=1;
    while(l<=r){     if(c%2==0){arr[r--]=c++; }
                     else{arr[l++]=c++;}
                                                 }
   
    for(int i=0;i<n;i++){printf("%i ",arr[i]);   }

    return 0;
    
}