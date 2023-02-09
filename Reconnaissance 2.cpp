#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,min=0,ans1=0,ans2=0,result=0;
    vector<int> v(a);
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    min=abs(v[0]-v[a-1]);
    ans1=a-1;
    ans2=0;
    for(int i=0;i<a-1;i++)
    {
        result=abs(v[i]-v[i+1]);
        if(result <min)
        {
            min=result;
            ans1=i;
            ans2=i+1;
        }
    }
    cout<<ans1+1<<" "<<ans2+1<<endl;
}
