#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }   
    int total=0;
    for(int i=0;i<n;i++)
    {
    total+=A[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++)
    {
       int rightsum=total-leftsum-A[i];
       printf("%d ",abs(leftsum-rightsum));
        leftsum += A[i];
    }
    return 0;
}
