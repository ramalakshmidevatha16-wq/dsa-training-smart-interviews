#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0;
        int binary[32]={0};
        if(n==0)
        cout<<"0";
        while(n>0)
        {
          binary[i++]=n%2;
          n=n/2;
        }
        for(int j=i-1;j>=0;j--)
        cout<<binary[j];
    
    cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
