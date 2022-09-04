//TO CHECK IF A NUMBER IS +VE,-VE OR 0
#include <stdio.h>
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    switch(num>0)
    {
        case 1:printf("positive");break;
        case 0:
            switch(num<0)
            {
                case 1:printf("it is negative");break;
                case 0:printf("it is equal to 0");break;
                }
    }
}
