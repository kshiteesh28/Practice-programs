//TO FIND LENGTH OF STRING WITHOUT LIB FUNCTION
#include <stdio.h>
void main()
{
    int i=0,count=0;
    char s[100];
    printf("enter your string ");
    scanf("%[^\n]s",s);
    printf("you entered : %s",s);
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nthe length of string is %d",count);
}
