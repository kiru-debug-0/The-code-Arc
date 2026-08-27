#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch ;
    printf("\n enter your key");
    scanf("%c", &ch);
    if(isalpha(ch)>0)
       printf("\n it is alphabet");
    if(isdigit(ch)>0)
       printf("\n it is a digit");
    if(isprint(ch)>0)
       printf("\n it is a printable character");
    if(ispunct(ch)>0)
       printf("\n it is a punctuation mark");
    if(isspace(ch)>0)
       printf("\n user has entered space");
    return 0;
}
