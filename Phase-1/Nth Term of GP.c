#include <stdio.h>
#include <stdlib.h>

int main() {
int a,r,n;
scanf("%d %d %d",&a,&r,&n);
int term=a*pow(r,n-1);
printf("%d\n",term);
    return 0;
}
