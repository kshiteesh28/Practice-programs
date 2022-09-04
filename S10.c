//TO REVERSE A STRING
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("enter your string: ");
    gets(s);
    printf("the reverse of your string is %s",strrev(s));
}
