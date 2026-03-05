#include <bits/stdc++.h>
using namespace std;
bool subsetSum(int n,int arr[],int k,int idx,int sum)
{
    if(idx==n)
    {
        if(sum==k) return true;
        else return false;
    }
    bool pick=subsetSum(n,arr,k,idx+1,sum+arr[idx]);
    bool dontPick=subsetSum(n,arr,k,idx+1,sum);
    return (pick||dontPick);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(subsetSum(n,arr,k,0,0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
