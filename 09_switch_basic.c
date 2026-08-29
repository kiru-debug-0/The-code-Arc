#include <stdio.h>
int main()
{
    int op,res;
    int a=5 , b=9;
    printf("\n enter your choice 1 for sum , 2 for multiply");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            res=a+b;
            printf("\n  addition of numbers = %d",res);
            break;
        case 2:
        
            res=a*b;
            printf("\n multiplication of numbers = %d",res);
            break;
        
        default:
            printf("\n wrong option");
    }
    return 0;
}
