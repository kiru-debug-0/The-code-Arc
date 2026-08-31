//write a program to list all leap years from 1900 to 1920
#include <stdio.h>
int main()
{
   int m =1900 , n =1920 ;
   do
   {
    if((m%4==0)||(m%100==0)&&(m%400==0))
        printf("\n %d is a leap year",m);
    m=m+1;
   }while(m<=n);
}
