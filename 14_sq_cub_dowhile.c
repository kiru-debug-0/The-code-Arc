//write a program using do while loop to display the square and cube of first n natural numbers 
#include <stdio.h>
int main()
{
    int i,num,sq,cub ;
    printf("\n enter the value till which you want square and cube");
    scanf("%d",&num);
    i=1;
    do
    {
        sq=i*i;
        cub=i*i*i;
        printf(" \n square = %d",sq);
        printf("\n cube = %d",cub);
        i=i+1;
    }while(i<=num);
}
