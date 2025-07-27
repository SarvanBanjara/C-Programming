//       5
//      45
//     345
//    2345
//   12345
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=i;j<=n;j++){printf(" ");temp++;} 
        for(int k=1;k<=i;k++){printf("%i",temp++);
        }
        printf("\n");
    }
}