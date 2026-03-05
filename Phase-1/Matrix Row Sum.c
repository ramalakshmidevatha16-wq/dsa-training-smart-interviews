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

    for(int i=0;i<n;i++)
   { int rowsum=0;
    for(int j=0;j<m;j++)
    {
       rowsum+= mat[i][j];
       
    }
    printf("%d\n",rowsum);
   }
   
    return 0;
}
