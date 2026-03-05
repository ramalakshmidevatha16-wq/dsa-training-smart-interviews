#include <stdio.h>
#include <math.h>

int main() {
 int p,r,n,t;
 scanf("%d%d%d%d",&p,&r,&n,&t);
 int ratefloor=r/n;
 long long finalamount=p*pow(1+ratefloor,n*t);
   long long compoundinterest=finalamount-p;
   printf("%lld\n",compoundinterest);
    return 0;
}
