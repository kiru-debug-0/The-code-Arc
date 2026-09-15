#include <stdio.h>
int main()
{
   int n,i ; 
   printf(" enter number");
   scanf("%d",&n);
   printf(" prime factors of number %d are : \n",n);
   for(i=2;i<n;i++)
       {      
           if(n%i==0)
              printf(" %d\n",i);
        } 
    return 0;
}
