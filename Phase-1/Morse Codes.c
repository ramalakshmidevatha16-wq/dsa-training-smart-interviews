#include <stdio.h>
#include <string.h>

int main() {

 const char *morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
 int n;
    scanf("%d",&n);
    char w[13],trans[101][200];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",w);
        char m[200]=" ";
    
    for(int j=0;w[j];j++){
    strcat(m,morse[w[j]-'a']);
    }
    int unique=1;
    for(int k=0;k<count;k++)
    {
        if(strcmp(m,trans[k])==0)
        {
            unique=0;
            break;
        }
    }
        if(unique)
        {
            strcpy(trans[count++],m);
    }
    }
printf("%d\n",count);
    return 0;
}
