#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,count=0;
string s;
 cin>>t;
 while(t--){
    cin>>s;
    if(s[1]=='+')
    {
        count=count+1;
    }
    else if(s[1]=='-')
    {
        count=count-1;
    }


    }

cout<<count<<endl; }
 
