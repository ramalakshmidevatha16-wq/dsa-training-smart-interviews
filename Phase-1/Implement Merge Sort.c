#include <bits/stdc++.h>
using namespace std;
int a[25],t[25];
void print(int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}
void mergesort(int l,int r,int n)
{
    if(l>=r) return;
    int m=(l+r)/2;
    mergesort(l,m,n);
    mergesort(m+1,r,n);
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r) 
    t[k++]=(a[i]<a[j])? a[i++]:a[j++];
    while(i<=m)
     t[k++]=a[i++];
     while(j<=r)
     t[k++]=a[j++];
     for(int x=0;x<k;x++)
     a[l+x]=t[x];
     print(n);
}
   
   int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(0,n-1,n);
  
}
