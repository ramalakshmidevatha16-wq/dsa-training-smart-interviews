#include <stdio.h>

int main() {

   int t;
   scanf("%d",&t);
   while(t--)
   {
    long long n;
    scanf("%lld",&n);
    if(n>0 && (n&(n-1))==0)
    {
        printf("True\n");
    }
    else{
        printf("False\n");
    }
   }
    return 0;
}
