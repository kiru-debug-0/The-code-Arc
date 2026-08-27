#include <stdio.h>
int main()
{
    int num; 
    printf("\n enter number");
    scanf(" %d",&num);
    if(num>0)
        printf("\n number is positive");
    else if(num<0)
        printf("\n number is negative");
    else
        printf("\n number is 0 ");
    return 0 ;
}
