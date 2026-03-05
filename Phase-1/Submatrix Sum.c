#include <stdio.h>
#include <stdlib.h>

int main() {

 int n;
 scanf("%d",&n);
 int i,j,k,l;
 scanf("%d %d %d %d",&i,&j,&k,&l);
 int m[100][100];
 for (int r=0;r<n;r++)
 {
    for(int col=0;col<n;col++)
    {
       scanf("%d",&m[r][col]);
    }
 }
 int sum=0;
 for (int r=i;r<=k;r++)
 {
    for(int col=j;col<=l;col++)
    {
        sum+=m[r][col];
    }
 }
 printf("%d\n",sum);
    return 0;
}
