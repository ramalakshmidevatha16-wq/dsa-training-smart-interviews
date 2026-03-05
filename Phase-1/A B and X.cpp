#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,x;
    cin>>a>>b>>x;
    if(abs(a-b)%(2*x)==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
