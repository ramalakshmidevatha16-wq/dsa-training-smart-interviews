#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
    long long x1,y1,x2,y2;
    long long x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    long long area1=(x2-x1)*(y2-y1);
    long long area2=(x4-x3)*(y4-y3);
    long long ox=max(0LL,min(x2,x4)-max(x1,x3));
    long long oy=max(0LL,min(y2,y4)-max(y1,y3));
    long long overlap=ox*oy;
    cout<<area1+area2-overlap<<"\n";
  }
    return 0;
}
