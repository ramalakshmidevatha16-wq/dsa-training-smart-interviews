#include <stdio.h>
#include <string.h>

int main() {

   char s[1005];
   scanf("%s",s);
   int len=strlen(s);
   if(len%2 !=0)
   {
    printf("No\n");
    return 0;
   }

int half=len/2;
if(strncmp(s,s+half,half)==0)
printf("Yes\n");
else
printf("No\n");
return 0;
}
