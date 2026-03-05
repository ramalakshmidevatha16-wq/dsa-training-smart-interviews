#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(long long n){
    long long r=0,t=n;
    while(t){
        r=r*10+t%10;
        t/=10;
    }
    return r==n;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        n++;
        while(!isPalindrome(n))
        {
            n++;
            
        }
                cout<<n<<"\n";
                
            
        }
    
    return 0;
}
