#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n<3)
    {
        cout<<"false";
        return 0;
    }
    int i=0;
    while(i+1<n && a[i]<a[i+1])
    {
        i++;
    }
    while(i+1<n && a[i]>a[i+1])
    {
        i++;
    }
    if(i==n-1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
