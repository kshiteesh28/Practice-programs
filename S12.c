//TO FIND OCCURENCE OF A STRING
#include <stdio.h>
#include <string.h>
void main()
{
    int i,n,count=0;
    char s[100],search;
    printf("enter your string: ");
    fgets(s,100,stdin);
    n=strlen(s);
    printf("enter the alphabet you wanna search: ");
    scanf("%c",&search);
    for(i=0;i<n;i++)
     {
         if(s[i]==search)
         count++;
     }
     printf("\n%c occurs %d times in your string",search,count);
}
