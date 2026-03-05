#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
    unsigned int n;
    scanf("%u",&n);
    unsigned int result=0;
    for(int i=0;i<32;i+=2)
    {
        unsigned int bit1=(n>>i)&1;
        unsigned int bit2=(n>>(i+1))&1;
        result|=(bit1<<(i+1));
        result|=(bit2<<i);
    }
    printf("%u\n",result);
  }
    return 0;
}
