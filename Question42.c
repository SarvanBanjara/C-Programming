/* write a program to perform Linear Search on an array - If element found print the index else -1
Case 1 :Sample Input → n (size of array) : 5                                       
Sample Input → Elements of array  :  1 2 3 4 5                
Sample Input → K (Element you wan to search) : 3                                                      
Sample Output → 3 found at 2 index  
Case 2 :Sample Input → n (size of array) : 5
Sample Input → Elements of array  :  1 2 3 4 5
Sample Input → K (Element you wan to search) : 69 
Sample Output → -1   */


#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter size of array  : ");
    scanf("%i",&n);
    int arr[n];

    printf("Enter elements for array :- \n");
    for(i=0;i<n;i++){
        scanf("%i",&arr[i]);
    }
    int find,flag=-1;

    printf("Enter the element you want to search :- ");
    scanf("%i",&find);
    for(j=0;j<n;j++){
        if(arr[j]==find){
            flag=j;
            break;
     }   }

     
    if(flag==-1){printf("%i not found in the array.",find);}
      else{printf("%i found at %i index.",find,j);}

                                                          
    return 0;
}
