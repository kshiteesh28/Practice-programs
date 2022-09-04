#include<stdio.h>
void main()
{
    char a[100]; char search; int i=0,count=0;
    printf("Enter the string: ");
    gets(a);
    printf("Enter the character you want to search: ");
    search=getchar();

    while(a[i]!='\0')
    {
        if(a[i]==search)
        {
            count++;
        }
        i++;
    }
    printf("The character %c occurs %d times",search,count);
}
