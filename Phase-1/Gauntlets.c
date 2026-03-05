#include <stdio.h>
#include <stdlib.h>

int main() {

   int n,a[1001],freq[1001]={0};
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    freq[a[i]]++;
   }
   int pairs=0;
   for(int i=0;i<=1000;i++)
   {
    pairs+=freq[i]/2;
   }
   printf("%d\n",pairs);
    return 0;
}
