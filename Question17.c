#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Cost Price = ");
    scanf("%i",&cp);
    printf("Selling Price = ");
    scanf("%i",&sp);
    if(cp==sp){printf("No profit no loss.");}
    else if(cp>sp){printf("Loss of %i\n",cp-sp);}

    else{printf("Profit  of %i\n",sp-cp);}

    return 0;
}



