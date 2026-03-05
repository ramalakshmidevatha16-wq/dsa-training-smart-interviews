#include <stdio.h>
#include <string.h>
int main() {

   char n[3001],m[3001];
   scanf("%s %s",n,m);
   int i=0,j=0;
   int nl=strlen(n),ml=strlen(m);
   while(i<nl && j< ml)
   {
    if(n[i]==m[j])
    {
        i++;
        j++;
    }
    else if(j>0 && m[j]==m[j-1])
    {
        j++;
    }
    else{
        printf("false\n");
        return 0;
    }
   }
   while(j< ml)
   {
    if(m[j]!=n[nl-1])
    {
        printf("false\n");
        return 0;
    }
    j++;
   }
   if(i==nl)printf("true\n");
   else printf("false\n");
    return 0;
}
