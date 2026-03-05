#include <stdio.h>
#include <stdlib.h>

int main() {

  int A,B;
  scanf("%d %d",&A,&B);
  int sum=A+B;
  int diff=A-B;
  int pro=A*B;
  int div=A/B;
  int rem=A%B;
  printf("Sum: %d\nDifference: %d\nProduct: %d\nDivision: %d\nRemainder: %d\n",sum,diff,pro,div,rem);
    return 0;
}
