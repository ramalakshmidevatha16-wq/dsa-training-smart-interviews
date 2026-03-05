#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[n][n];
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            cin>>mat[i][j];
            }
        }
        int ans[(2*n)-1];
        int idx=0;
        for (int col=n-1;col>=0;col--)
        {  int sum=0;
           int i=0,j=col;
           while(i<n && j<n)
           {
             sum+= mat[i][j];
             i++;
             j++;
           } 
           ans[idx++]=sum;
        }
        for (int row=1;row<n;row++)
        {  int sum=0;
           int i=row,j=0;
           while(i<n && j<n)
           {
             sum+= mat[i][j];
             i++;
             j++;
           } 
           ans[idx++]=sum;
        }
   for(int k=0;k<idx;k++)
   {
    cout<<ans[k]<<" ";

   }
   cout<<endl;
    }
    return 0;
}
