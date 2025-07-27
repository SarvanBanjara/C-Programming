// left rotation by 1 element 

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
    int arrcopy[1]={arr[0]};
for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
}
   arr[n-1]=arrcopy[0];


   for(int i=0;i<n;i++){
    printf("%i ",arr[i]);

   }


   return 0;
}