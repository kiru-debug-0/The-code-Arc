#include <stdio.h>
int main()
{
    int n1,n2,n3,larg;
    printf("\n enter 3 numbers ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    larg=n1;
    if(n2>larg&&n2>n3)
    {
        printf("\n largest number is %d",n2);
    }
    else if(n3>larg&&n3>n2)
    {
        printf("\n largest number is %d",n3);
    }
    else
    {
        printf("\n largest number is %d",n1);
    }
}
