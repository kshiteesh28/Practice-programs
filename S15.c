//TO CONVERT STRING TO LOWER CASE
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("enter your string: ");
    gets(s);
    printf("you entered: %s\n",s);
    printf("the string in lower case is %s\n",strlwr(s));
}

