#include <stdio.h>

int main() {

   int n,m;
   scanf("%d %d",&n,&m);
   int mat[n][m];
   int row[100]={0};
   int col[100]={0};
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        scanf("%d",&mat[i][j]);
    }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]==0)
        {
            row[i]=1;
            col[j]=1;
        }
    }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(row[i]==1||col[j]==1)
        {
            mat[i][j]=0;
        }
    }
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        printf("%d ",mat[i][j]);
    }
    printf("\n");
   }
    return 0;
}
