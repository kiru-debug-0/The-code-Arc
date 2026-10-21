# include <stdio.h>
int main()
{
    int i , k,j;
    for(i=1;i<=5;i++)
        {
            for(j=i;j<=4;j++)
                printf("   ");
            for(k=1;k<=i*2-1;k++)
                printf(" * ");
            printf("\n");
        }
}
