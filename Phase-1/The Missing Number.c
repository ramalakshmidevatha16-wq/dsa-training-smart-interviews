#include <stdio.h>
#include <stdlib.h>

int main() {

   int num,sum=0;
   for (int i=0;i<99;i++)
   {
    scanf("%d",&num);
    sum+=num;
   }
   int missing = 5050-sum;
   printf("%d\n",missing);
    return 0;
}
