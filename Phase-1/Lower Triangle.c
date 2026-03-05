#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
int matrix[n][n];
long long sum=0;
for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        scanf("%d",&matrix[i][j]);
        if(j<=i)
        {
            sum+=matrix[i][j];
        }
    }
}
printf("%lld",sum);
    return 0;
}
