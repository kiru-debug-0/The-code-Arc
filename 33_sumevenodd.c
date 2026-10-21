# include <stdio.h>
int main()
{
    int n , i , e=0,o=0;
    printf(" enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            if(i%2==0)
                e=e+i;
            else
                o=o+i;
        }
    printf(" sum of even numbers =%d and odd number=%d",e,o);
}
