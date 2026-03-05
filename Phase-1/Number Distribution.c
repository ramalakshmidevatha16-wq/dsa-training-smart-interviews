#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
int a[10000];
for(int i =0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int z = 0,p = 0,ne = 0;
for (int i=0;i<n;i++)
{
    if (a[i]==0)
    {
        z++;
    }
    else if (a[i]<0)
    {
        ne++;
    }
    else
    {
        p++;
    }
}
printf("%d %d %d",z,p,ne);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
