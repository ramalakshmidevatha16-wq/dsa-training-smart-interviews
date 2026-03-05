#include <stdio.h>
#include <stdlib.h>

int main() {

   int n,m;
   int a[1000],b[1000];
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    scanf("%d",&m);
   for(int i=0;i<m;i++)
   {
    scanf("%d",&b[i]);
   }
   int i=0,j=0;
   while(i<n && j<m)
   {
    if(a[i]<=b[j])
    {
        printf("%d ",a[i]);
        i++;
    }
    else{
         printf("%d ",b[j]);
        j++;
    }
   }
    while(i<n)
    {
        printf("%d ",a[i]);
        i++;
    }
    while(j<m)
    {
        printf("%d ",b[j]);
        j++;
    }
    printf("\n");
    return 0;
}
