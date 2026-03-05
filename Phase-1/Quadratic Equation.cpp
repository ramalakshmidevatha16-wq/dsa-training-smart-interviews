#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    cin>>a>>b>>c;
    double d=b*b-4*a*c;
    if(a==0)
    {
        if(b==0)
        {
            cout<<"Imaginary Roots";
        }
        else{
            double x=-c/b;
            printf("%.2f %.2f",x,x);
        }
        return 0;
    }
  
    if(d<0)
    {
        cout<<"Imaginary Roots";
    }
    else{
        double r1=(-b+sqrt(d))/(2*a);
        double r2=(-b-sqrt(d))/(2*a);
        printf("%.2f %.2f",r1,r2);
    }
    return 0;
}
