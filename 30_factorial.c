#include <stdio.h>
int main()
{
   int num,a,b,c;
   a=0;
   b=1;
   printf(" fibonacci series ");
   printf("%d \n",a);
   printf("%d \n",b);
   for(int i =1;i<9;i++)
       {
           c=a+b;
           a=b;
           b=c;
           printf("%d \n",c);
       }
}
