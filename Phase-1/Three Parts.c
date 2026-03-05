#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
int arr[n];
long long total=0;
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    total+= arr[i];
}
if(total%3!=0)
{
    printf("false\n");
    return 0;
}
long long target =total/3;
long long currsum =0;
int count=0;
 for(int i=0;i<n;i++)
 {
    
    currsum+=arr[i];
    if(currsum==target)
    {
    count++;
    currsum=0;
 }
}
if(count>=3)
{
    printf("true\n");
}
else 
printf("false");


    return 0;
}
