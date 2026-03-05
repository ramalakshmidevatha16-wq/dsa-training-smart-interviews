#include <stdio.h>
#include <stdbool.h>

int solve(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<=30;i++){
        int cnt=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]&(1<<i)) {
            cnt++;
        }
    }
     if((cnt%3)!=0)
     {ans|=(1<<i);}
    }
 return ans;
    }

int main() {

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("%d\n",solve(arr,n));

    }
    return 0;
}
