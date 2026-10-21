# include <stdio.h>
int main()
{
    int sum,i,p,d;
    for(i=1000;i<=9999;i++)
        {
            sum=0;
            p=i;
            while(p!=0)
                {
                   d=p%10;
                   sum=sum+d;
                   p=p/10; 
                }
            if(sum%2==0)
                printf("%d",i);
            
        }
}
