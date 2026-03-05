#include <stdio.h>

int main() {

   int t;
   scanf("%d",&t);
   for(int k=1;k<=t;k++)
   {
    int n;
    scanf("%d",&n);
    int mat[100][100],rotated[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
rotated[j][n-1-i]=mat[i][j];
        }
    }
    printf("Test Case #%d:\n",k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",rotated[i][j]);
            if(j!=n-1)printf(" ");
        }printf("\n");
    }
   }
    return 0;
}
