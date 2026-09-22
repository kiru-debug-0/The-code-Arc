#include <stdio.h>
int main()
{
    int num ,newn=0,rem,n;
    printf(" enter number to check if it is palindrome or not ");
    scanf("%d",&num);
    n=num;
    while(num>0)
        {
            rem=num%10;
            newn=newn*10+rem;
            num=num/10;
        }
    if(n==newn)
    {
        printf("the number is palindrome");
    }
    else
        printf("the number is not palindrome ");
}
