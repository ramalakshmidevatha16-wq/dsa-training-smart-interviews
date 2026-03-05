#include <stdio.h>

int main() {

   int n,m;
   scanf("%d %d",&n,&m);
   int mat[n][m];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&mat[i][j]);
    }
   }
   for(int j=0;j<m;j++)
   { int colsum=0;
    for(int i=0;i<n;i++)
    {
    colsum+= mat[i][j];
    }
    printf("%d\n",colsum);
   }
    return 0;
}
