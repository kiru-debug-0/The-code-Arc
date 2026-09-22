#include <stdio.h>
int main()
{
   int num ,i,sum=0;
    printf(" enter number to check if its perfect or not ");
    scanf("%d",&num);
    for(int i = 1;i<num;i++)
        if(num%i==0)
            sum=sum+i;
    if(num==sum)
        printf(" it is a perfect number ");
    else
        printf(" not a perfect number ");
        
}
