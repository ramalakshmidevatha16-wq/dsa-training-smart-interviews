#include <stdio.h>
#include <string.h>

int main() {

   char n[1002];
   scanf("%s",n);
   int sum=0;
   for(int i=0;n[i]!='\0';i++)
   {
    sum+=n[i]-'0';
   }
printf("%d\n",sum);
    return 0;
}
