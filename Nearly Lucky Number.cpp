#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a=0;
  int b=0;
   cin>>a;
   while(a>0)
   {
    if(a%10==4 || a%10== 7)
    {
        b++;

    }
    a=a/10;
   }
   if(b== 4 || b==7)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
}
