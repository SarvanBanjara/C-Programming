// A
// BB
// CCC
// DDDD
// EEEEE
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%i",&n);
    int temp=65;
    for(int j=1;j<=n;j++){
    for(int i=1;i<=j;i++)
    {
        printf("%c",temp);
        
    }
    temp++;
    printf("\n");
    }
    return 0;
    
}