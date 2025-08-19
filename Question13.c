//Write a program to find the largest among three numbers 
#include<stdio.h>
int main() 
{
  int  a,b ,c; 
  printf("Enter a : ");
  scanf("%i",&a);
  printf("Enter b : ");
  scanf("%i",&b);
  printf("Enter c : ");
  scanf("%i",&c);
  printf("\n");
  if(a==b && b==c){printf("All are equal\n");}
  else if(a>b && (a>c || b==c)){printf("a = %i is largest\n",a);}
  else if(b>c && (b>a || c==a)){printf("b = %i is largest\n",b);}
  else if(c>a && (c>b || a==b)){printf("c = %i is largest\n",c);}
  else if(a==b && a>c){printf("a = %i and b = %i are largest\n",a,b);}
  else if(b==c && b>a){printf("b = %i and c = %i are largest\n",b,c);}
  else if(c==a && c>b){printf("a = %i and c = %i are largest\n",a,c);}
  printf("\n");
 
return 0;
}