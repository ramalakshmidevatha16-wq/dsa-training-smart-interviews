#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char s[101];
  scanf("%s",s);
  int l=strlen(s);
  int i;
  for ( i=1; i < l; i+=2)
  {
    printf("%c",s[i]);
  }
  for( i=0; i < l; i+=2)
  {
     printf("%c",s[i]);
  }
  printf("\n");
    return 0;
}
