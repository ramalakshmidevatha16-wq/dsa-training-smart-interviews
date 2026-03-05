#include <stdio.h>

int main() {

   int n;
   scanf("%d",&n);
   int mat[n][n];
   for(int i=0;i<n;i++)
   { int k=i+1,d=n-1;
    for(int j=0;j<n;j++)
    {
        if(j<=i)
        {
         printf("%d ",k);
         k+=d;
         d--;
        }
        else printf(" ");
    }
 printf("\n");
   }
    return 0;
}
