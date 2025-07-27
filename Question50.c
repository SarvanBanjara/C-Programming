/*Write a program  to find the largest element of an array and print its index.
Sample Input →n (size of array) : 5     
Sample Input → Elements of array  :  7 27 12 19 3                                   
Sample Output → 27 is largest element and its index is 1   */

#include<stdio.h>
int main()
{
    int arr[]={7,27,12,19,3};
    int len=sizeof(arr)/sizeof(int);
        int lg=0,index;
    for(int i=0;i<len;i++){

        
        if(lg<arr[i]){
            lg=arr[i];
            index=i;
        }
    }
    printf("%i is largest element and its index is %i",lg,index);
}

