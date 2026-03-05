#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
int c[100][100];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&c[i][j]);
    }
}
for(int i=1;i<n-1;i++)
{
    for(int j=1;j<n-1;j++)
    {
        int max=c[i-1][j-1];
        for(int x=-1;x<=1;x++)
        {
            for(int y=-1;y<=1;y++)
            {
                if (c[i+x][j+y]>max)
                max=c[i+x][j+y];
            }
        }
        printf("%d ",max);
    }
    printf("\n");
}
    return 0;
}
