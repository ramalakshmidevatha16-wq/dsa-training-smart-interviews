#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int temp= n;
    int digsum=0;
    while(temp>0)
    {
        digsum+=temp%10;
        temp/=10;
    }
    if(n%digsum==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No");
    }

    return 0;
}
