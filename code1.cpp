#include <bits/stdc++.h>
using namespace std;
int main()
{
   string a;
   char b;
   int j=0;
   cin>>a;
   for(int i=1;a.size();i++)
   {
    if(a[i]=='.' && a[i-1]=='-')
    {
        b=b+'1';
        
        i+2;
        j++;
    }
    if(a[i]=='-'&& a[i-1]=='-')
    {
        b=b+'2';
        j++;
        i=i+2;
    }
    else
    {
        b=b+'0';
        j++;
        i=i+1;
    }
   }
   cout<<b<<endl;
}