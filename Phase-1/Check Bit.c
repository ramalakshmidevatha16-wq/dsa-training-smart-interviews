#include <stdio.h>
#include <stdlib.h>

int main() {
int n,i;
scanf("%d %d",&n,&i );
if(n&(1<<i))
printf("true\n");
else 
printf("false\n");
    return 0;
}
