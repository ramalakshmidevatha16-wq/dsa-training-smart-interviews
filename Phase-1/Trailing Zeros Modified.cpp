#include <bits/stdc++.h>
using namespace std;
long long zeroes(long long x)
{
    long long s=0;
    while(x)
    {
        x/=5;
        s+=x;
    }
    return s;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==0)
        {
            cout<<5<<"\n";
            continue;
        }
        long long l=0,r=5*n,ans=-1;
       
        while(l<=r)
        {
            long long m=(l+r)/2;
            if(zeroes(m)>=n)
            {
                ans=m;
                r=m-1;
            }
            else {l=m+1;
           
        }
    }
       if(ans!=-1 && zeroes(ans)==n)
       cout<<5<<"\n";
       else cout<<0<<"\n";
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
