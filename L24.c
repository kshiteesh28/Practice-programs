//QUIZ WITH 4 OPTIONS
#include <stdio.h>
void main()
{
    int option;
    printf("which is the odd number?\nchoose any one option\n1.22  2.32\n3.ab 4.1\n");

    do
  {
     scanf("%d",&option);
     if(option==4)
       {
         printf("correct");break;
       }
       else if(option==1 ||option==2||option==3)
       {
           printf("wrong\nbyeeee");break;
       }
     else
        printf("enter 1,2,3 or 4 only\ngood luck\n");continue;
  }while(option>0);
}
