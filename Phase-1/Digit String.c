#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char s[1001];
scanf("%s",s);
int isdigitonly=1;
for(int i=0;s[i]!='\0';i++)
{
    if(s[i]<'0'||s[i]>'9')
    {
        isdigitonly=0;
        break;
    }
}
if(isdigitonly)
printf("Yes\n");
else 
printf("No\n");
 
    return 0;
}
