#include <stdio.h>
#include <stdlib.h>

int main() {
int n,m;
int A[100],B[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
scanf("%d",&m);
for(int i=0;i<m;i++)
{
scanf("%d",&B[i]);
}
for(int i=0;i<m;i++)
{
    if(B[i]>=0 && B[i]<n)
    {
        printf("%d ",A[B[i]]);
    }
    else{
        printf("-1 ");
    }
}
printf("\n");
    return 0;
}
