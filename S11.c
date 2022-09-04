//TO COMPARE TWO STRINGS
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100];
    printf("enter 1st string: ");
    gets(a);
    printf("enter 2nd string: ");
    gets(b);
    (strcmp(a,b)==0)?printf("strings are equal"):printf("strings are not equal");
}
