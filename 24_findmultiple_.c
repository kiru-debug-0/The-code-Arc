#include <stdio.h>
int main()
{
    int n1,n2;
    printf(" enter 1st number and 2nd number ");
    scanf(" %d %d ",&n1,&n2);
    if(n2%n1==0)
        printf(" %d is a multiple of %d ",n2,n1);
    else 
        printf(" not a multiple");
    return 0;
}
