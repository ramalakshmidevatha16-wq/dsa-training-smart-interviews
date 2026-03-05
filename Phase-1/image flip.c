#include <stdio.h>
#include <stdlib.h>

int main() {

 int n,m;
 int mat[100][100];
 scanf("%d%d",&n,&m);
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  scanf("%d",&mat[i][j]);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m/2;j++)
    {
        int temp=mat[i][j];
        mat[i][j]=mat[i][m-1-j];
        mat[i][m-1-j]=temp;
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        mat[i][j]=1-mat[i][j];
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
