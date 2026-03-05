#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,current=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            current++;
            if(current>max)
            {
                max=current;
            }}
            else{
                current=0;
            }
        }
        printf("%d\n",max);
    
    return 0;
}
