#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for (int i=0;i<n-1;i++)
  { 
    int minindex=i;
  for(int j=i+1;j<n;j++)
  {
    if(arr[j]<arr[minindex])
    {
        minindex=j;
    }
  
}
  if(minindex!=i)
  {
    int temp=arr[i];
    arr[i]=arr[minindex];
    arr[minindex]=temp;
  }
  for(int k=0;k<n;k++)
  {
    printf("%d ",arr[k]);
  }
  printf("\n");
  }
    return 0;
}
