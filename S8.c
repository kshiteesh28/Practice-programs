//TO FIND LENGTGH OF A STRING
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("enter your string: ");
    scanf("%[^\n]",s);
    printf("\nthe length of string is %d",strlen(s));
}
