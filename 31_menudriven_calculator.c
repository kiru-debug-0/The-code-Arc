#include <stdio.h>
int main()
{
   int a , b ,ch,c;
   printf(" enter 1 for sum , 2 for substract , 3 for multiply , 4 for division ");
    scanf("%d",&ch);
    printf(" enter a and b ");
    scanf(" %d%d",&a,&b);
    switch(ch)
        {
             case 1:
                  printf(" result = %d",a+b);
                  break;
             case 2:
                  printf("result = %d",a-b);
                  break;
            case 3 :
                  printf(" result =%d",a*b);
                  break;
            case 4 :
                  printf("result = %d ",a/b);
                  break;
        }
        
}
