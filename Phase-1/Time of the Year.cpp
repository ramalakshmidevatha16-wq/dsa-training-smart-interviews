#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   string days[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
   string months[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
   int mdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
   while(t--)
   {
    long long n;
    cin>>n;
    long long d=n/86400;
    int dayIndex=d%7;
    int y=1970;
    while(true){
        bool leap=(y%400==0||(y%4==0&&y%100!=0));
        int ydays=leap?366:365;
        if(d>=ydays){
            d-=ydays;
            y++;
        }
        else break;
    }
    int m=0;
    while(true)
    {
        int dm=mdays[m];
        if(m==1&&(y%400==0||(y%4==0&&y%100!=0)))
        dm=29;
        if(d>=dm){
            d-=dm;
            m++;
        }
        else break;
    }
   
    cout<<setw(2)<<setfill('0')<<d+1<<"-"<<months[m]<<"-"<<y<<" "<<days[dayIndex]<<"\n";
   }
    return 0;
}
