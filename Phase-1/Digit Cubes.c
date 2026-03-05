#include <stdio.h>
#include <stdlib.h>

int main() {

   long long n;
   scanf("%lld",&n);
   long long temp=n;
   long long sum=0;
   while(temp>0)
   {
    int digit=temp%10;
    sum+=(long long)digit *digit*digit;
    temp/=10;
   }
   if(sum==n)
   {
    printf("Yes\n");
   }
   else
   {
    printf("No\n");
   }
    return 0;
}
