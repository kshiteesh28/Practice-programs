//TO REVERSE A STRING WITHOUT LIB FUNCTION
#include <stdio.h>
void main()
{
    int i=0,count=0,j=0;
    char s[100],r[100];
    printf("enter your string: ");
    scanf("%[^\n]s",s);
    printf("you entered : %s",s);
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    for(i=count-1;i>=0;i--)
    {
      r[j]=s[i];
      j++;
    }
    r[j]='\0';
    printf("\nthe reverse of string is %s",r);
}
