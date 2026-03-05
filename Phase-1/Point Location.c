#include <stdio.h>
#include <stdlib.h>

int main() {

 int x1,y1,x2,y2,x3,y3;
 scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
 long long cross=(long long)(x2-x1)*(y3-y1)-(long long)(y2-y1)*(x3-x1);
 if(cross>0)
 printf("LEFT\n");
 else if(cross<0)
 printf("RIGHT\n");
 else 
 printf("TOUCH\n");
    return 0;
}
