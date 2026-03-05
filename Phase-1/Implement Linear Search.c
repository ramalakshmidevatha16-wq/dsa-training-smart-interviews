#include <bits/stdc++.h>
using namespace std;
void linearsearch(int arr[],int n,int k)
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==k){
    cout<<i<<endl;
    return ;}
   }
   cout<<"-1"<<endl;
}
int main() {
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
    linearsearch(arr,n,k);
    return 0;
}
