#include<stdio.h>
void main()
{
    char ch;
    printf("\nWhat is Ranbir's name in YJHD?\na.Bunny\t\tb.Raj\nc.Titu\t\td.Sonu\n\nyour answer: \n");

    do
    {

        scanf("%c",&ch);



            if(ch=='a')
            {
                printf("correct\n");break;
            }
            else if(ch=='b'||ch=='c'||ch=='d')
            {
                 printf("wrong\n");break;
            }

        else

            printf("enter only a,b,c,d\n");continue;


    }
    while(ch!='a' || ch!='b' || ch!='c' || ch!='d');

    printf("\nbye");
}
