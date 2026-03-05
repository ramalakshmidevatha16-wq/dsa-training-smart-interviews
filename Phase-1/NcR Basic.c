#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    fact*=i;
    return fact;
}
int main() {

    int n,r;
    scanf("%d %d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  
  printf("%d\n",ncr);
    return 0;
}
