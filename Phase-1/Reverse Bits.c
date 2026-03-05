#include <stdio.h>

int main() {

   int t;
   scanf("%d",&t);
   while(t--)
   {
    unsigned int n;
    scanf("%u",&n);
    unsigned int rev=0;
    for(int i=0;i<32;i++)
    {
        rev<<=1;
        rev|=(n&1);
        n>>=1;
    }
    printf("%u\n",rev);
   }
    return 0;
}
