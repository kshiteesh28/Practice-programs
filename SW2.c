//SIMPLE CALCULATOR
#include <stdio.h>
void main()
{
    int a,b,c;
    char op;

	printf("\nenter the operator: ");
    scanf("%c",&op);

    printf("enter the two numbers:  ");
    scanf("%d%d",&a,&b);

    switch (op)
    {
        case  '+':c=a+b;printf("%d",c);break;
        case  '-':c=a-b;printf("%d",c);break;
        case  '/':c=a/b;printf("%d",c);break;
        case  '*':c=a*b;printf("%d",c);break;
        default :printf("\nenter the right operator");break;
    }

}
