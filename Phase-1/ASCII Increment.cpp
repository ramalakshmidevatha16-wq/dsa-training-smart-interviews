#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin>>s;
    cin>>k;
    k=k%26;
    for (char &c : s)
    {
        if(c >='a' && c<='z')
        {
            c=(c-'a'+k)%26 +'a';
        }
        else if(c>='A'&& c<='Z')

{
    c=(c-'A'+k)%26+'A';
    }
}
cout<<s<<endl;
    return 0;
}
