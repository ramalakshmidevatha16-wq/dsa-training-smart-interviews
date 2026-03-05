#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char s[1005],t[1005];
scanf("%s %s",s,t);
int lens=strlen(s);
int lent=strlen(t);
int isprefix= strncmp(s,t,lent)==0;
int issuffix= strncmp(s+(lens-lent),t,lent)==0;
if(isprefix && issuffix)
printf("Yes\n");
else
printf("No\n");
    
    return 0;
}
