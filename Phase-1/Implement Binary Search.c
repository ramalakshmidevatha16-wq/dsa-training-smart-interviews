#include <bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int n,int k)
{    
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        cout<<low<<" "<<high<<" "<<mid<<endl;
        if(arr[mid]==k)
        {
         cout<<"True"<<endl;
         return;
        }
        else if(arr[mid]<k)
        {
          low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     cout<<"False"<<endl;
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    binarysearch(arr,n,k);
    return 0;
}
