//Write a program to print the characters of a string in reverse order.
//Sample Input →String  : “adakam”                           

//Sample Output → Result ⇒ “makada”
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    
   int count=0;
   for(int i=0;str[i]!='\0';i++){count++;}
    
     
     for(int j=count-1;j>=0;j--){
        printf("%c",str[j]);
     }
     return 0;
}
