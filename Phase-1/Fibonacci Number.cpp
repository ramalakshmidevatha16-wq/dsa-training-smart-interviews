#include <stdio.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d",&n);
   if(n==0)
   {
    printf("0\n");
   }
   else if(n==1)
   {
    printf("1\n");
   }
   else {
    int a=0,b=1,fib;
    for (int i=2;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("%d\n",fib);
   }
    return 0;
}
