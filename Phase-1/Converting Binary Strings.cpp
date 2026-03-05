#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int cnt0to1=0,cnt1to0=0;
        bool has0=false,has1=false;
        for(int i=0;i<a.size();i++)
        {if(a[i]=='0')has0=true;
        if(a[i]=='1') has1=true;
        if(a[i]!=b[i]){
            if(a[i]=='0') cnt0to1++;
            else cnt1to0++;
        }}
        if((cnt0to1>0 && !has1)||(cnt1to0>0 &&!has0))
        cout<<"NO\n";
        else cout<<"YES "<<max(cnt0to1,cnt1to0)<<"\n";
    }
    return 0;
}
