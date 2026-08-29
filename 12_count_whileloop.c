#include <stdio.h>
int main()
{
    int num , p=0 , n=0 , z=0;
    printf("\n enter -1 to exist");
    printf("\n enter number");
    scanf("%d",&num);
    while(num != -1)
    {
        if(num>0)
        {
          p=p+1;
        }
        else if(num<0)
        {
          n=n+1;
        }
        else
        {
          z=z+1;
        }
        printf("\n enter number");
        scanf("%d",&num);
    }
    printf("\n total positive= %d",p);
    printf("\n total negative = %d",n);
    printf("\n total zero = %d",z);
}
}
