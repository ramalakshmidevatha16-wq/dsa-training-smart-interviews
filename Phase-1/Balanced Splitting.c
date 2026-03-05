#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char s[1001];
   scanf("%s",s);
   int b=0;
   int c=0;
   int n=strlen(s);
   for (int i=0;i<n;i++)
   {
    if(s[i]=='L')
    {
        b++;
    }
    else if(s[i]=='R')
    {
        b--;
    }
    if(b==0)
    {
        c++;
    }
   }
   printf("%d\n",c);
    return 0;
}
