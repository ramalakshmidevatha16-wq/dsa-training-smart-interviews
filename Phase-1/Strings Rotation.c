#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool check(char a[],char b[])
{ int n=strlen(b);
   for(int i=0;i<n;i++)
    {
        if(b[i]!=a[i])
        {
            return false;
        }
    }
    return true;
}
int main() {
 int n;
    scanf("%d",&n);
    char a[n+1],b[n+1];
    scanf("%s %s",a,b);
    int f= 0;
    for(int j=0;j<n;j++)
    { if(check(a,b)){
    f=1;
    break;
    }
    char last=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=last;
}
if(f==0)
{
    printf("no");
}
else{
    printf("yes");
} return 0;
}
