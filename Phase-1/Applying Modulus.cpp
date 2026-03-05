#include <bits/stdc++.h>
using namespace std;

int main() {
   long long a,b,c,d,e,f;
   cin>>a>>b>>c>>d>>e>>f;
   const long long MOD=1e9+7;
   long long p1=((a%MOD)*(b%MOD))%MOD;
   p1=(p1*(c%MOD))%MOD;
   long long p2=((d%MOD)*(e%MOD))%MOD;
   p2=(p2*(f%MOD))%MOD;
   long long ans=(p1-p2+MOD)%MOD;
   cout<<ans<<endl;
    return 0;
}
