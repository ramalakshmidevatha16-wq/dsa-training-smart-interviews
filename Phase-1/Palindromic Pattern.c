#include <stdio.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d",&n);
   for (int i=1;i<=n;i++)
   {
    for(int j=0;j<i;j++)
    {
        printf("%c ",'A'+j);
    }
   
   for(int j=i-2;j>=0;j--)
   {
    printf("%c ",'A'+j);
   }
   printf("\n");
   }
    return 0;
}
