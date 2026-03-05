#include <stdio.h>
int countsetbits(int n)
{
    int count=0;
    while(n)
    {
        n &= (n-1);
        count++;
    } 
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int xorVal= a^b;
        int flips= countsetbits(xorVal);
    
     printf("%d\n",flips);
}
    return 0;
}
