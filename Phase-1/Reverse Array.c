#include <stdio.h>
#include <stdlib.h>
void reverseprint(int arr[],int index)
{
    if(index < 0){
        return;
    }
    printf("%d ",arr[index]);
    reverseprint(arr,index-1);
}
int main() {
  int n;
 scanf("%d",&n);
  int arr[100];
  for (int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  reverseprint(arr,n-1);
    return 0;
}
