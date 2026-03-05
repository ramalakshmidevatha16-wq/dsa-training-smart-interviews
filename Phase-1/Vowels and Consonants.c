#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

  char str[1001];
  int vowels=0, consonants=0;
  scanf("%s",str);
  for(int i=0;str[i]!='\0';i++)
  {
    char ch=tolower(str[i]);
    if(ch>='a' && ch<='z'){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    vowels++;
    else 
    consonants++;
  }}
  printf("%d %d\n",vowels,consonants);
    return 0;
}
