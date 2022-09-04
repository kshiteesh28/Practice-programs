//TO CONCATENATE A STRING
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100];
    printf("enter your first string: ");
    gets(a);
    printf("enter your second string: ");
    gets(b);
    strcat(a,b);
    printf("\nyour concatenated string is %s",a);
}
