#include <bits/stdc++.h>
using namespace std;

int main() {
    int maintank,additionaltank;
    cin>>maintank>>additionaltank;
    int used=0;
    while(maintank>0)
    {
        maintank--;
        used++;
        if(used%5==0 && additionaltank>0)
        {
            maintank++;
            additionaltank--;
        }
    }
    cout<<used*10<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
