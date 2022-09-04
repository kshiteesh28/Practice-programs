//GRADE OF A KID BASED ON HIS MARKS
#include <stdio.h>
void main()
{
    int marks;
    printf("enter your marks to get your grades\n");
    scanf("%d",&marks);
    switch(marks>=85)
    {
        case 1:printf("A grade");break;
        case 0:
            {
                switch(marks>=75&&marks<85)
                {
                  case 1:printf("B grade");break;
                    case 0:

                            switch(marks>=55&&marks<75)
                            {
                                case 1:printf("C grade");break;
                                case 0:
                                    switch(marks>=40&&marks<55)
                                    {
                                        case 1:printf("D grade");break;
                                        case 0:printf("FAIL");break;
                                        default:printf("pls enter marks 1-100");
                                    }
                            }

                }
            }
    }
}
