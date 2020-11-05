#include <stdio.h>
#include <stdlib.h>


int getFirstDayOfmonth(int month,int year)
{
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int   i, r, s = 0;
    for(i = 0 ; i < month - 1 ; i++)
    s = s + mon[i];
    s = s + (1 + year + (year / 4) - 2);

   if(((year%4==0&&year%100!=0)||year%400==0)&&month==2)
    {
      s=s+6;
    }
     s = s % 7;
   return s;
}

int main()
{
    int year,month,daysInMonth,weekDay=0,startingDay,day;
    printf("\nEnter Year desired year ");
    scanf("%d",&year);
    printf("\n enter month");
    scanf("%d",&month);
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

   if((year%4==0&&year%100!=0)||year%400==0)
       monthDay[1]=29;

   startingDay=getFirstDayOfmonth(month,year);
   printf("%d\n",startingDay);



   daysInMonth=monthDay[month-1];
      printf("\n\nX---------------%s-------------------X\n",months[month-1]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");


    for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("    -");

      for(day=1;day<=daysInMonth;day++){
        printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }

      }

   }







