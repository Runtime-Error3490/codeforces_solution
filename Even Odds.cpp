#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,counto=0,counte=0;
  cin>>n>>k;
  if(n%2!=0)
  {

    counto=(n/2)+1;
    counte=n/2;
  }
  else
  {
    counte=(n/2);
    counto=n/2;
  }

  if(k<=counto)
  {
    cout<<(1+(k-1)*2)<<endl;
  }
  else
  {
    k=k-counto;
    cout<<(2+(k-1)*2)<<endl;
  }
}
