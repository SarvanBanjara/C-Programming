/*Write a program to perform Binary Search on an array If element found print the index else -1
Case 1 :Sample Input → n (size of array) : 5                                       
Sample Input → Elements of array  :  1 2 3 4 5                
Sample Input → K (Element you want to search) : 5                                                      
Sample Output → 5 found at 4 index         
Case 2 :Sample Input → n (size of array) : 5
Sample Input → Elements of array  :  1 2 3 4 5
Sample Input → K (Element you want to search) : 69 
Sample Output → -1   */

#include<stdio.h>
int main()
{
  int n ;
  printf("Enter size of array :- ");
  scanf("%i",&n);
  int arr[n],find;
  for(int i=0;i<n;i++)  { scanf("%i",&arr[i]); }
  printf("Element you want to search :- ");
  scanf("%i",&find);

  int left=0,right=n-1,mid=(left+right)/2;
  while(left<=right)
  {
    if(arr[mid]==find){ break;}
    else if(arr[mid]>find){right=mid-1;  mid= (left+right)/2;}
    else{left=mid+1;mid=right/2;}
  }
    if(arr[mid]==find){printf("%i found and its index is %i.",find,mid);}
    else{printf("%i not found",find);}
}





