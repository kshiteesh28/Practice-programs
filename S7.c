//TO REVERSE A STRING AND TO CHECK IF PALINDROME OR NOT
#include <stdio.h>
void main()
{
    int i=0,counts=0,j=0,a=0;
    char s[100],temp[100];
    printf("enter the sting : ");
    scanf("%[^\n]s",s);
    printf("\nyou entered %s",s);
    while(s[i]!=0)
    {
        counts++;
        i++;
    }
    for(i=counts-1;i>=0;i--)
    {
        temp[j]=s[i];
        j++;
    }
    temp[j]='\0';
    printf("\nthe reverse of %s is %s",s,temp);
    for(i=0;i<j;i++)
    {
      if(s[i]!=temp[i])
        {
            a++;break;
         }
    }
    if(a==0)
    {
      printf("\n\npalindrome!!!");
    }
    else
    {
        printf("\nnot a palindrome");
    }
}
