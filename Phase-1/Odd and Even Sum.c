#include <stdio.h>
#include <stdlib.h>

int main() {
int n,arr[1000];
int odd=0,even=0;
scanf("%d",&n);
for (int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    {
    even+=arr[i];
    }
    else
    {
        odd+=arr[i];
    }
}
printf("%d %d",odd,even);
return 0;
  
}
