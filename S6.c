//TO FIND OCCURENCE OF A CHARACTER IN A STRING WITHOUT LIB FUNCTION
#include <stdio.h>
void main ()
{
    int i=0,count=0;
    char s[100],ch;
    printf("enter your string : ");
    gets(s);
    printf("you entered : %s",s);
    printf("\nenter the character you want to search ");
    ch=getchar();
    while(s[i]!='\0')
    {
        if(s[i]==ch)
        {
           count++;
        }
        i++;
    }
    printf("\ncharacter %c occurs %d times",ch,count);
}
