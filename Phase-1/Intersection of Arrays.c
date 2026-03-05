#include <stdio.h>
#include <stdlib.h>

int main() {

   int n,m;
   int a[1000],b[1000];
   int printed[2001]={0};
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   scanf("%d",&m);
    for (int i=0;i<m;i++)
   {
     scanf("%d",&b[i]);
   }
   for(int i=0;i<n;i++)
   {
    int found=0;
    if (printed[a[i]+1000]) continue;
    for (int j=0;j<m;j++)
    {
    if(a[i]==b[j])
    {
        printf("%d ",a[i]);
        printed[a[i]+1000]=1;
        break;
    }
  }
} printf("\n");
    return 0;
}
