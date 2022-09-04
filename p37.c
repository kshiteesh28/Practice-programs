#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int i,j,n;
    printf("enter value of n:");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      for(i=n;i>0;i--)
      {
          for(j=n;j>0;j--)
          {
              if(j<=i)
              {printf("%d ",i);}
              else
              printf("%d ",j);
          }
         for(j=2;j<=n;j++)
          {
               if(j<=i)
              {printf("%d ",i);}
              else
              printf("%d ",j);
          }
          printf("\n");
      }
     for(i=2;i<=n;i++)
      {
          for(j=n;j>0;j--)
          {
              if(j<=i)
              {printf("%d ",i);}
              else
              printf("%d ",j);
          }
         for(j=2;j<=n;j++)
          {
                if(j<=i)
              {printf("%d ",i);}
              else
              printf("%d ",j);
          }
          printf("\n");
      }
    return 0;
}
/*
   3 3 3 3 3
   3 2 2 2 3
   3 2 1 2 3
   3 2 2 2 3
   3 3 3 3 3
*/
