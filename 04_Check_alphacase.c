#include <stdio.h>
int main()
{
    char ch;
    printf("\n enter character");
    scanf(" %c",&ch);
    if(ch>="A"&&ch<="Z")
       printf("\n entered character is in upper case. In lower case it is : %c",(ch+32));
    else 
       printf("\n entered character is in lower case . In upper case its is %c",(ch-32));
    return 0;
}
