#include <stdio.h>
int main()
{
    int m , n , sum=0 ;
    printf("\n enter 2 values for sum ");
    scanf("%d",&m);
    scanf("%d",&n);
    while(m<=n){
        sum=sum+m;
        m++;
    }
    printf("\n sum= %d",sum);
}
