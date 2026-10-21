# include <stdio.h>
int main()
{
    int n1 , n2,j,i ,c;
    printf(" enter both numbers ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
        {
            c=0;
            for(j=2;j<i;j++)
                {
                    if(i%j==0)
                        c=c+1;
                }
                    if(c==0)
                        printf("%d",i);
        }
}
