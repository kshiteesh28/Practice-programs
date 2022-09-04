//TO FIND IF ARMSTRONG OR NOT
#include<stdio.h>
#include<math.h>
void main()
{
  int num,original,digits,last,sum=0;
  printf("enter the number ");
  scanf("%d",&num);
  original=num;
  digits=(int)log10(num) +1;
  while(num>0)
  {
    last=num%10;
    sum+=(int)(pow(last,digits));
    num=num/10;
  }
  (original==sum)?printf("Armstrong"):printf("not armstrong");
}
