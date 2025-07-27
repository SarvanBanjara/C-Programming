/*Write a program to check whether the given array is palindrome or not
Case 1 : 
Sample Input →n (size of array) : 4                             
Sample Input → Elements of array  :  1 2 2 1         
Sample Output → Yes its a Palindromic Array             */
#include<Stdio.h>
int main()
{
    int arr[]={12,15,2,14,2,15,12};
    int len=sizeof(arr)/sizeof(int);
    int flag=1;
    for(int i=0;i<=(len)/2;i++){
        if(arr[i]!=arr[len-i-1]){flag=0;}
    }
    if(flag){printf("Yes it is a palindromic array");}
    else{printf("NO it is not a palindromi array");}
}