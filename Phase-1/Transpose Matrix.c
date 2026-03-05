#include <stdio.h>
#include <stdlib.h>

int main() {

  int n,m;
  int mat[100][100];
  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  scanf("%d",&mat[i][j]);

  for(int j=0;j<m;j++) {
  for(int i=0;i<n;i++){
  printf("%d ",mat[i][j]);}
  printf("\n");}
    return 0;
}
