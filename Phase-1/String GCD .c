#include <stdio.h>
#include <string.h>

int isdivisble(char *str,char *pattern)
{
    int lenstr= strlen(str);
    int lenpat= strlen(pattern);
    if(lenstr%lenpat !=0)
    return 0;
    for(int i=0;i<lenstr;i++)
    {
        if(str[i]!=pattern[i%lenpat])
        return 0;
    }
    return 1;
}
int main() {
 char p[1001],q[1001];
 scanf("%s %s",p,q);
 int lenp=strlen(p),lenq=strlen(q);
 int a=lenp,b=lenq;
 while(b!=0)
 {
    int temp=b;
    b=a%b;
    a=temp;
 }
 int gcdlen=a;
 char cand[1001];
 strncpy(cand,p,gcdlen);
 cand[gcdlen]='\0';
 if(isdivisble(p,cand) && isdivisble(q,cand))
   printf("%s\n",cand);
   else
   printf("-1\n");
    return 0;
}
