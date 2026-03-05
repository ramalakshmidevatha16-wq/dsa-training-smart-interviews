#include <stdio.h>

int main() {

   int w,l;
   scanf("%d %d",&w,&l);
   int mat[l][w];
   for(int i=0;i<l;i++)
   {
    for(int j=0;j<w;j++)
    {
        if(i==0||i==l-1||j==0||j==w-1)
        {
            printf("*");
        }
        else printf(" ");
    }
    printf("\n");
   }
    return 0;
}
