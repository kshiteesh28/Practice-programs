//TO READ AND PRINT A STRING
#include <stdio.h>
void main()
{
    char s[100];
    printf("enter the string\n");
    scanf("%[^\n]s",s);
    printf("the entered string is %s",s);
}
