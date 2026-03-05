#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans=0;
        for(int i=0;i<31;i++){
            long long cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j] & (1LL<<i)){
                    cnt++;
                }
            }
            ans=ans+(cnt*(n-cnt))*(1<<i);
        }
        cout<<ans*2<<endl;
     }
    return 0;
}
