#include <stdio.h>

int hollowdiamond(int n) {
    int mid=n/2;
 for(int i=0;i<=mid;i++)
 {
    for(int j=0;j<mid-i;j++)  printf(" ");
    printf("*");
    if(i>0){ for(int j=0;j<2*i-1;j++)
    printf(" "); printf("*");
    }
    printf("\n");
    }
    for(int i=mid-1;i>=0;i--)
    {
        for(int j=0;j<mid-i;j++) printf(" ");
        printf("*");
        if(i>0){
            for(int j=0;j<2*i-1;j++)printf(" ");
            printf("*");
        }
        printf("\n");
    }
}
    int main()
    {
 int T,n;
 scanf("%d",&T);
 for(int t=1;t<=T;t++){
    scanf("%d",&n);
    printf("Case #%d:\n",t);
    hollowdiamond(n);
 } return 0;
    }
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
