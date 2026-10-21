# include <stdio.h>
int main()
{
    int i , ch=65,j;
    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%c",ch);
                    ch=ch+1;
                }
            printf("\n");
        }
}
