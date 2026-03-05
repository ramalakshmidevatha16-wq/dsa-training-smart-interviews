#include <stdio.h>
#include <stdlib.h>

int main() {

 int n,m,count=0;
 scanf("%d %d",&n,&m);
 int total=n*m;
 int num;
 for(int i=0;i<n;i++)
 {
    for (int j=0;j<m;j++)
    {
        scanf("%d",&num);
        if(num==0)
        count++;
    }
 }
 if(count>total/2)
printf("Yes\n");
else 
printf("No\n");
return 0;
}
