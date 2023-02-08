#include <iostream>
#include<cmath>

using namespace std;

int main()
{
int a=0,ans=0,i=0,j=0;
 for(i=0;i<5;i++)
 {
    for (j=0;j<5;j++)
    {
        cin>>a;
        if(a==1)
        {break;}
    }
    if(a==1)
    {break;}
 }
 
 ans=abs(2-i)+abs(2-j);
 cout<<ans;

 return 0;
}
