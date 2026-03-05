#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    const long long MOD=1e9+7;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
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
