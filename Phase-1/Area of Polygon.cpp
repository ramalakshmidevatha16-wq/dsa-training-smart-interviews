#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long> x(n),y(n);
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    
    long long area2=0;
    for(int i=0;i<n;i++)
    {
        int j=(i+1)%n;
        area2 += x[i]*y[j]-x[j]*y[i];
    }
    cout<<llabs(area2)<<endl;
    return 0;
}
