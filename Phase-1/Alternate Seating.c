#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
  int seats[m];
  for (int i=0;i<m;i++)
  {
    scanf("%d",&seats[i]);

  }
  int count=0;
  for (int i=0;i<m;i++)
  {
    if (seats[i]==0)
    {
        if((i==0|| seats[i-1]==0)&&(i==m||seats[i+1]==0))
        {
            seats[i]=1;
            count++;
        }
    }
  }
  if(count>=n)
  printf("YES\n");
  else 
  printf("NO");
  return 0;
}
