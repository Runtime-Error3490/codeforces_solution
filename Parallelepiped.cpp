#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    vector<double>v;
    double a;
    double b=0,c=0,d=0,e=0,f=0,g=0;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
    sort(v.begin(),v.end());
    b=v[2]/v[0];
    c=v[2]/v[1];
    d=b/c;
    e=sqrt(v[2]/d);
    f=d*e;
    g=v[1]/f;
    cout<<e*4+f*4+g*4;
}
 
