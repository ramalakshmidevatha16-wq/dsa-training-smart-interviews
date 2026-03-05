#include <stdio.h>
#include <stdlib.h>

int isleap(int year)
{
    return (year % 400 == 0)|| (year % 4 == 0 && year % 100 !=0);
}
int daysfrom1971(int y,int m,int d)
{
    int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days=0;
    for(int year = 1971;year < y;year++)
    {
        days+=isleap(year)?366:365;
    }
    for(int month=1;month<m;month++)
    {
        if(month==2 && isleap(y))
        {
            days+=29;
        }
        else 
        days+=monthdays[month-1];
    }
    days+=d;
    return days;
}
int main() {

    int y1,m1,d1,y2,m2,d2;
    scanf("%d-%d-%d %d-%d-%d",&y1,&m1,&d1,&y2,&m2,&d2);
    int days1=daysfrom1971(y1,m1,d1);
    int days2=daysfrom1971(y2,m2,d2);
    printf("%d\n",abs(days1-days2));
    return 0;
}
