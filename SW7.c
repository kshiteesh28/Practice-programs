//INPUT A NUMER TO GET DAYS OF A WEEK
#include <stdio.h>
void main()
{
    int a;
    printf("enter numbers 1-7 for the day of the week\n");
    scanf("%d",&a);
    switch(a)
    {

    case 1:printf("monday");break;
     case 2:printf("tuesday");break;
      case 3:printf("wednesday");break;
       case 4:printf("thursday");break;
        case 5:printf("friday");break;
         case 6:printf("satday");break;
          case 7:printf("sunday");break;
          default :printf("pls enter a number from 1-7");
}
}
