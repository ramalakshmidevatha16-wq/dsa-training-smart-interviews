#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long power=1;
    while(power*2<=n)
    {
        power*=2;
    }
    cout<<n-power<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
