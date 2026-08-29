#include <stdio.h>
int main()
{
    double tax,taxam , inc ;
    printf("\n enter income ");
    scanf("%lf",&inc );
    if(inc<=150000)
    {
        taxam=0;
        printf("\n total income = %lf ",inc);
    }
    if(inc>150000&&inc<=300000)
    {
        tax=inc*0.10;
        taxam=inc-tax;
        printf("\n remaining income = %lf" ,taxam);
    }
    if(inc>300000&&inc<=500000)
    {
         tax=inc*0.20;
         taxam=inc-tax;
         printf("\n remaining income =%lf",taxam);
    }
    if(inc>500000)
    {
        tax=inc*0.50;
        taxam=inc-tax;
        printf("\n remaining income =%lf",taxam);
    }

}
