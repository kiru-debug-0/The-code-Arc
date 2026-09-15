//pattern
#include <stdio.h>
int main()
{
    int i,j,c=0;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("%d",c);
        c=c+1;
      }
      printf("\n");
    }
}
