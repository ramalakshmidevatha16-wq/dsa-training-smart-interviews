#include <stdio.h>
#include <stdlib.h>

    long long fact(int n)
    {
        long long res=1;
        for(int i=2;i<=n;i++)
        res*=i;
        return res;
    }
    int main(){
        int n;
        scanf("%d",&n);
long long num=fact(2*n);
long long den=fact(n)*fact(n)*(n+1);
long long catalan = num/den;
printf("%lld\n",catalan);
return 0;
    }
