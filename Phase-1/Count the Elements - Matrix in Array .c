#include <stdio.h>
#include <stdlib.h>

int main() {

   int n,m,a;
   scanf("%d %d",&n,&m);
   int mat[100][100],arr[100];
   for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      scanf("%d",&mat[i][j]);
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
       int count=0;
        for(int j=0;j<m;j++){
        for(int k=0;k<a;k++){
        if(mat[i][j]==arr[k])
        {
            count++;
            break;
        }
        }
        }
        printf("%d\n",count);
    }
    return 0;
}
