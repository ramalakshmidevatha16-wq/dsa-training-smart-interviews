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
   {
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]==1)
        { if(i==0||j==0||i==n-1||j==m-1) continue;
            int issuper=1;
            for(int x=-1;x<=1;x++)
            {
                for(int y=-1;y<=1;y++)
                {
                    if(x==0 && y==0)
                    continue;
                    int ni=i+x;
                    int nj=j+y;
                    if(ni>=0 && ni<n && nj >=0 && nj<m)
                    {
                        if(mat[ni][nj]==1)
                        {
                            issuper=0;
                            break;
                        }
                    }
                }
                if(!issuper) break;
            }
            if(issuper)
            {
                printf("Yes");
                return 0;
            }
        }
    }
   }
   printf("No");
   return 0;
 }
