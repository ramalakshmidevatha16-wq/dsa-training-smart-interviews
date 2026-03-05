#include <stdio.h>
#include <stdlib.h>

int main() {

 int n;
 scanf("%d",&n);
 unsigned long long fact=1;
 for (int i=1;i<=n;i++)
 {
    fact*=i;
 }
 printf("%llu\n",fact);
    return 0;
}
