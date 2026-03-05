#include <stdio.h>
#include <stdlib.h>

int main() {

  char s[501];
  scanf("%s",s);
  char stack[501];
  int top=-1;
  for(int i=0;s[i]!='\0';i++)
  {
    stack[++top]=s[i];
    if(top>=1)
    {
        if((stack[top-1]=='A' && stack[top]=='B')||(stack[top-1]=='C'&& stack[top]=='D'))
        {
            top-=2;
        }
    }
  }
  printf("%d\n",top+1);
    return 0;
}
