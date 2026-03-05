#include <stdio.h>

int main() {

   int t;
   scanf("%d",&t);
   while(t--)
   {
    long long n;
    scanf("%lld",&n);
    long long count=0;
    for(long long i=5;n/i>=1;i*=5)
    count+=n/i;
   
   printf("%lld\n",count);}
    return 0;
}
