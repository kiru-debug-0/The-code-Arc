#include <stdio.h>
int main()
{
    int num ,newn=0,rem,n;
    printf(" enter number to check if it is armstrong or not ");
    scanf("%d",&num);
    n=num;
    while(num>0)
        {
            rem=num%10;
            newn=newn+rem*rem*rem;
            num=num/10;
        }
    if(n==newn)
    {
        printf("the number is armstrong");
    }
    else
        printf("the number is not armstrong ");
}
