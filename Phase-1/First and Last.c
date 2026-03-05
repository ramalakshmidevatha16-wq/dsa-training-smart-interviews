#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,x;
    int arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int first = -1,last = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            if(first==-1)
            {
                first = i;
            }
            last = i;
        } 
    }
    if(first==-1)
    printf("-1 -1\n");
    else
    printf("%d %d\n",first ,last );
    return 0;
}
