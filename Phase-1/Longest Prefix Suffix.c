#include <stdio.h>
#include <string.h>

int main() {
 char s[101];
 scanf("%s",s);
 int n=strlen(s);
 int lps[101];
 lps[0]=0;
 int len=0;
 int i=1;
 while(i<n)
 {
    if(s[i]==s[len])
    {
        len++;
        lps[i]=len;
        i++;
    }
    else{
        if(len!=0)
        {
            len =lps[len -1];
        }
        else {
            lps[i]=0;
            i++;
        }
    }
 }
   printf("%d\n",lps[n-1]);
    return 0;
}
