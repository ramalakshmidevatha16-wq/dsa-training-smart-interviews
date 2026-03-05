#include <stdio.h>

int main() {

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,m1;
        scanf("%d%d",&n1,&m1);
        int a[50][50];
        for(int i=0;i<n1;i++)
          for(int j=0;j<m1;j++)
            scanf("%d",&a[i][j]);
              int n2,m2;
        scanf("%d%d",&n2,&m2);
        int b[50][50];
        for(int i=0;i<n2;i++)
          for(int j=0;j<m2;j++)
            scanf("%d",&b[i][j]);
            int result[50][50]={0};
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<m2;j++)
                {
                    for(int k=0;k<m1;k++)
                    {
                        result[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<m2;j++)
                {
                    printf("%d",result[i][j]);
                    if(j<m2-1)printf(" ");
                }
                printf("\n");
            }}
    
    return 0;
}
