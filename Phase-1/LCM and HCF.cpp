#include <bits/stdc++.h>
using namespace std;
long long hcf(long long a, long long b)
{
    while(b!=0)
    {
        long long temp=b;
        b= a%b;
        a=temp;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long lcm=(a*b)/hcf(a,b);
        cout<<lcm<<" "<<hcf(a,b)<<endl;
    }
    return 0;
}
