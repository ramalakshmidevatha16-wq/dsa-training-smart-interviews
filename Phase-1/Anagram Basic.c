#include <stdio.h>
#include <string.h>

int main() {

   char a[10005],b[10005];
   int freq[26]={0};
   scanf("%s",a);
   scanf("%s",b);
   if(strlen(a)!=strlen(b)){
   printf("FALSE\n");
   return 0;
}
for(int i=0;a[i]!='\0';i++)
{
    freq[a[i]-'a']++;
}
for(int i=0;b[i]!='\0';i++)
{
    freq[b[i]-'a']--;
}

for(int i=0;i<26;i++)
{
    if(freq[i]!=0)
    {
        printf("FALSE\n");
        return 0;
    }
}
printf("TRUE\n");
return 0;
}
