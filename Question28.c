//Write a program to print the sum of all even & odd numbers separately up to n term
#include<stdio.h>
#include<math.h>
int main() {

int n;
printf("Enter n : ");
scanf("%i",&n);
int evensum=0,oddsum=0;
printf("Even Sum => ");
for(int i=1;i<=n;i++){
    if(i%2==0){evensum+=i;
    if(i==n||i==n-1){printf("%i = ",i);}
    else{printf("%i + ",i);}
    }
}
printf("%i",evensum);

printf("\n\nOdd Sum => ");
for(int i=1;i<=n;i++){
    if(i%2!=0){oddsum+=i;
    if(i==n||i==n-1){printf("%i = ",i);}
    else{printf("%i + ",i);}
    }
}
printf("%i",oddsum);

return 0;
}   