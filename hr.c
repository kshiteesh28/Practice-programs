#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a,b,max1=0,max2=0,max3=0;
  int i,j,l;
  for(a=1;a<n;a++)
  {
    for(b=a+1;b<=n;b++)
    {
      i=a&b;
      j=a|b;
      l=a^b;
      if(i>max1&&i<k)
      {
          max1=i;
      }
      if(j>max2&&j<k)
      {
          max2=j;
      }
      if(l>max3&&l<k)
      {
          max3=l;
      }
    }
  }
  printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
