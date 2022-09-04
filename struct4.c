//C Program to Calculate Difference Between Two Time Periods
#include <stdio.h>
typedef struct clock{
int hour;
int min;
int sec;
}time;
void input(time t[3],int);
void timeDifference(time t[3],time diff);
void main()
{
    time t[3],diff;
    for(int i=1;i<=2;i++)
    {
        if(i==1)
        {
            printf("\nenter start time"); //1 is start time
        }
        else
        {
            printf("\nenter end time"); //2 is end time
        }
        input(t,i);
    }
    printf("\ntime difference is:");
    printf("%d:%d:%d-",t[1].hour,t[1].min,t[1].sec);
    printf("%d:%d:%d",t[2].hour,t[2].min,t[2].sec);
     timeDifference(t,diff);
}
void input(time t[2],int i)
{
    printf("\nenter hours,minutes and seconds:");
    scanf("%d%d%d",&t[i].hour,&t[i].min,&t[i].sec);
}
void timeDifference(time t[3],time diff)
{
    int i,j;

    for(i=1;i<=2;i++)   //to make sure minutes and seconds are withing 60
    {
        while(t[i].sec>60)
        {
            t[i].sec-=60;
            t[i].min++;
        }
        while(t[i].min>60)
        {
            t[i].min-=60;
            t[i].hour++;
        }
    }

    if(t[1].hour<t[2].hour)  //interchanging time if start is smaller than stop
    {
        for(i=0;i<3;i++)
        {
            j=1+i;
            if(i==2)
            {
                j=0;
            }
            t[i].hour=t[j].hour;
            t[i].min=t[j].min;
            t[i].sec=t[j].sec;
        }
    }
    while(t[2].sec>t[1].sec)
      {
          t[1].sec+=60;
          t[1].min--;
      }
      diff.sec=t[1].sec-t[2].sec;
      while(t[2].min>t[1].min)
      {
          t[1].min-=60;
          t[1].hour++;
      }
      diff.min=t[1].min-t[2].min;
      diff.hour=t[1].hour-t[2].hour;
      printf("=%d:%d:%d\n",diff.hour,diff.min,diff.sec);
}
