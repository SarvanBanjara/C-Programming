// Write a program  to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
// Sample Input → n : 5      

// [ Explanation : Sum of the series  ⇒ 1 + 11 + 111 + 1111 + 11111 = 12345]                                              

// Sample Output → 12345
#include<stdio.h>
int main() 
{
int n,i,s;
printf("Enter the first digit for your series : ");
scanf("%i",&s);
printf("Enter the no till when you want the series : ");
scanf("%i",&n);
int val=0;
int sum =0;

for(i=0;i<n;i++)


{   if(i<n-1){
    val=val*10 + s;
    printf("%i + ",val);
    sum+=val;
}
   else{ val=val*10 + s;
    printf("%i",val);
    sum+=val;}
}
printf(" = %i",sum);



return 0;
}
