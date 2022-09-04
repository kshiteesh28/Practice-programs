//PALINDROME
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100];
    printf("enter your string: ");
    gets(a);
    strcpy(b,a);
    (strcmp(b,strrev(a))==0)?printf("palindrome"):printf("not a palindrome");
}
