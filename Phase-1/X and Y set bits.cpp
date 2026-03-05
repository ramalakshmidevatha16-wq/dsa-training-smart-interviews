#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
   long long t;
   cin>>t;
   while(t--){ 
    long long  x,y;
    cin>>x>>y;
    long long res=(1LL<<x)|(1LL<<y);
    cout<<res%MOD<<endl;
   }
    return 0;
}
