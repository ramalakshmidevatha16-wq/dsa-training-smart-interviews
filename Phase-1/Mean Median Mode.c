#include <stdio.h>
#include <stdlib.h>

int main() {
int n,arr[10000];
double mean=0.0,median;
int mode=-1,max_count=0;
scanf("%d",&n);
int sum=0;
for (int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
mean=(double)sum/n;
if(n%2==0)
{
    median=(arr[n/2-1]+arr[n/2])/2.0;
}
else
{
    median=arr[n/2];
}
int current=arr[0],count=1;
for(int i=1;i<n;i++)
{
    if(arr[i]==current)
    {
        count++;
    }
    else 
    {
        if(count>max_count)
        {
            max_count=count;
            mode=current;
        }
        current=arr[i];
        count=1;
    }
}
if(count>max_count)
{
    max_count=count;
    mode= current;
}
  printf("%.2lf %.2lf %d",mean,median,mode);
    return 0;
}
