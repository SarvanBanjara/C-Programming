// Write a program  to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
// Sample Input → n : 5      

// [ Explanation : Sum of the series  ⇒ 1 + 11 + 111 + 1111 + 11111 = 12345]                                              

// Sample Output → 12345

#include<stdio.h>
#include<math.h>
int main() 
{

int a,b;
printf("Enter the digit :");
scanf("%i",&a);
printf("Enter till when you want series : ");
scanf("%i",&b);
int sum=0,no,c=0;

for(int i=0;i<b;i++)
{
  no=pow(10, i)*a+c;
  c=no;
  sum += no;
  if(i<b-1){printf("%i +",c);}
  else{printf("%i = ",no);}

}
printf("%i",sum);

return 0;
}