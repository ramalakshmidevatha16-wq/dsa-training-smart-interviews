#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    long long hasvalue=0;
    long long p=11;
    long long power=1;
    for(int i=0;i<s.length();i++)
    {
        power*=p;
        hasvalue+=(long long)(s[i])*power;
    }
    cout<<hasvalue;
    return 0;
}
