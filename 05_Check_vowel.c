#include <stdio.h>
int main()
{
    char ch;
    printf("\n enter character");
    scanf(" %c", &ch );
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         printf("\n character is vowel");
    else
         printf("\n chaater is not vowel");
    return 0;
}
