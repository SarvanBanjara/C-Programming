// Write a program  to input a string and print it. Also, find its length.
// Sample Input →String  : “Hello Shery”                           

// Sample Output → String is “Hello Shery” and its length is 11

#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("String : ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0'){
      i++;
    }
    printf("String is %s and its length is %i",str,i-1);

   
return 0;
}