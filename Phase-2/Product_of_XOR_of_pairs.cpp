#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    const long long MOD=1e9+7;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n>3000)
        {
            cout<<"0\n";
           continue;
        }
        long long ans=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=(ans*(arr[i]^arr[j]))%MOD;
            }

        }
        cout<<ans<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
