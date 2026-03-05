#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n;
    scanf("%d",&n);
    int temp=n,digits=0;
    if(n==0)
    digits=1;
    else{
        while(temp>0)
        {
            digits++;
            temp/=10;
        }
    }
    temp=n;
    int sum=0;
    while(temp>0)
    {
        int dig=temp%10;
        sum+=(int)pow(dig,digits);
        temp/=10;
    }
    if(sum==n)
    {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
