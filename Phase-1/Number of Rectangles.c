#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d",&n);
int count=0;
for(int h=1;h<=n;h++){
for(int w=h;w<=n;w++)
{
    if(h*w<=n)
    {
        count++;
    }
}
}
printf("%d\n",count);
    return 0;
}
