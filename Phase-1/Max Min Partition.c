#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int compare(const void *a,const void *b)
 {
    return (*(int*)a-*(int*)b);
 }
int main() {
    int n;
    scanf("%d",&n);
    int d[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    qsort(d,n,sizeof(int),compare);
    int minDiff= INT_MAX;
    for (int i=0;i < n-1;i++)
    {
        int diff=abs(d[i]-d[i+1]);
        if(diff<minDiff)
        {
            minDiff=diff;
        }}
        printf("%d\n",minDiff);

   
    return 0;
}
