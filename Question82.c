// 1
// 11
// 121
// 1331
// 14641
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    int temp=1;
    for(int i=0;i<n;i++){
       printf("%i\n",(int)pow(11,i));
    }
    return 0;
}