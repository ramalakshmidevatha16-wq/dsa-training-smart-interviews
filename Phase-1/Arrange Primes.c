#include <stdio.h>
#include <math.h>
#define mod 1000000007
int isprime(int num)
{
    if(num<2)
    return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
  long long fact(int n)
  {
    long long res=1;
    for(int i=1;i<=n;i++)
    {
        res=(res*i)% mod;
    }
    return res;
  }
  int main()
  {
    int n;
    scanf("%d",&n);
    int primecount=0;
    for(int i=1;i<=n;i++)
    {
        if(isprime(i))
        primecount++;
    }
    long long ans=(fact(primecount)*fact(n-primecount))%mod;
 printf("%lld\n",ans); 
    return 0;
}
