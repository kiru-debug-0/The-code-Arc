#include <stdio.h>
int main()
{
   float n1;
   int n2 ; 
   printf(" enter floating number and integer ") ;
   scanf(" %f %d",&n1,&n2);
   if(n1>=3.14)
       n2=n2+10;
   printf(" the value of n2 after changes = %d",n2);
   return 0;
}
