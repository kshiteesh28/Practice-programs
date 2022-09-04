//TO CHECK IF PALINDROME OR NOT
#include <stdio.h>
 void main()
{
   int i,num,rev=0,rem,temp;
   printf("enter the number ");
   scanf("%d",&num);
   temp=num;

   while(i=num)
   {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
     i++;
   }
   if(rev==temp)
  {
      printf("%d is a palindrome",temp);
  }
   else
   {
     printf("%d is not a  palindrome and reverse is %d",temp,rev);
   }

}
