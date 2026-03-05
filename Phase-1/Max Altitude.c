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
int current=0;
int max=0;
for(int i=0;i<n;i++){
current+=a[i];
if(current>max)
{
    max=current;
} }
printf("%d\n",max);
    return 0;
}
