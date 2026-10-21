# include <stdio.h>
int main()
{
    int i, n ,j,sum=0,s;
    printf(" enter number till which you want sum ");
    scanf("%d",&n);
    printf("series\n");
    for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=i;j++)
                s=s+j;
            if(i<n)
                 printf("%d + ",s);
            else
                printf("%d ",s);
            sum=sum+s;
        }
    printf(" sum = %d \n",sum);
}
