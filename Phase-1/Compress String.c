#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char str[101];
scanf("%s",str);
int i=0;
while(str[i]!='\0')
{
    char current=str[i];
    int count=1;
    while (str[i]==str[i+1])
    {
        count++;
        i++;
    }
    printf("%c%d",current ,count);
    i++;
}
  printf("\n");
    return 0;
}
