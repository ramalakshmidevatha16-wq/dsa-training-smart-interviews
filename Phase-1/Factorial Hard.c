#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007

int main() {

long long n;
scanf("%lld",&n);
long long result=1;
for(long long i=1;i<=n;i++)
{
    result=(result*i)%MOD;
}
printf("%lld",result);

    return 0;
}
