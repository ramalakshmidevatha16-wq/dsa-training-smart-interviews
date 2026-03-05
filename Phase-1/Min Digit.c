#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    char num[12];
    scanf("%s",num);
    int len=strlen(num);
 
    while(len>1)
    {
     int  minpos=0;
        for(int i=1;i<len;i++)
        {
           
            if(num[i]<num[minpos]){
            minpos=i;
        }
    }
    if(minpos!=0)
    {
        swap(&num[0],&num[minpos]);
    }
    len--;
    num[len]='\0';}

   printf("%c\n",num[0]);
    return 0;
}
