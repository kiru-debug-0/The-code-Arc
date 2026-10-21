# include <stdio.h>
int main()
{
    int n ,i,k;
    printf(" enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                k=-i*i;
                printf("%d+",k);
            }
            else
            {
                k=+i*i;
                printf("%d",k);
            }
                
        }
}
