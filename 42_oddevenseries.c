# include <stdio.h>
int main()
{
    int n ,i,j=1,k;
    printf("enter number till which you want to print series ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            if(i%2!=0)
                k=1;
            else
                k=-1;
            if(i<n)
                printf("%d/%d+",k,j);
            else
                printf("%d/%d",k,j);
            j=j+2;
        }
}
