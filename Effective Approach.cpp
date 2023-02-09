#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    map<long long int,long long int>m{};
    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int k;
    cin>>k;
    long long int a[k];
    for(long long int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    long long int sum1=0,sum2=0;
    for(long long int i=0;i<n;i++)
    {
        m[v[i]]=i;
    }
    for(long long int i=0;i<k;i++)
    {
        sum1+=m[a[i]]+1;
        sum2+=n-m[a[i]];
    }
    cout<<sum1<<" "<<sum2<<endl;
}
