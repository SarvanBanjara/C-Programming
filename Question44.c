/*Write a program to perform Bubble sort on an array  
Sample Input → n (size of array) : 8      
Sample Input → Elements of array  :  5 3 8 4 7 1 2 6
Sample Output → Sorted Array : 1 2 3 4 5 6 7 8    */

#include<stdio.h>
int main(){
  int n ;
  printf("Enter size of array :- ");
  scanf("%i",&n);

  int arr[n];
  printf("Enter elements to perform sorting :- ");
  for(int i=0;i<n;i++){scanf("%i",&arr[i]);}

  printf("\nUnsorted Array :- ");
  for(int i=0;i<n;i++){printf("%i ",arr[i]);}

  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }

  }
  printf("\nSorted Array :- ");
  for(int i=0;i<n;i++){printf("%i ",arr[i]);}
 
  

    return 0;
}