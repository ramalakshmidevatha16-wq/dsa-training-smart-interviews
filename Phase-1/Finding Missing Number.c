#include <stdio.h>

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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int totalsum=0;
        totalsum=((n+1)*(n+2))/2;
        printf("%d\n",totalsum-sum);
    
  }
     return 0;
}
