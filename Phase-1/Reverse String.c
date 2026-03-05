#include <stdio.h>
#include <string.h>
int main() {
 char str[101];
  scanf("%s",str);
  int n=strlen(str);
  int p1=0;
  int p2=n-1;
 while(p1<p2)
 {
    char temp=str[p2];
    str[p2]=str[p1];
    str[p1]=temp;
    p1++;
    p2--;

 } 
 printf("%s",str);
    return 0;
}
