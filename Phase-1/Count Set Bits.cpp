#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        while(n)
        {
            n=n&(n-1);
            count++;
        }
        cout<<count;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
