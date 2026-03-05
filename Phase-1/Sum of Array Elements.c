#include <stdio.h>

int main() {

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int  n;
        scanf("%d",&n);
        long long x;
        long long sum=0;
        for(int i=0;i<n;i++)
        { scanf("%ldd",&x);
            sum+=x;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
