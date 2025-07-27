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
