#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    char a[4][4];
    int count=0;
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
        cin>>a[i][j];
    }
   }
for(int i=1;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        if(a[i][j]==a[i][j+1] && a[i][j]==a[i-1][j] && a[i-1][j]==a[i-1][j+1])//****
        {
            cout<<"YES"<<endl;
            count=1;
            break;
            
            
        }
        else if(a[i][j]!=a[i][j+1] && a[i][j+1]==a[i-1][j] && a[i-1][j]==a[i-1][j+1])//**.*
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        else if(a[i][j]==a[i][j+1] && a[i][j]==a[i-1][j] && a[i-1][j]!=a[i-1][j+1])//*.**
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        else if(a[i][j]==a[i][j+1] && a[i][j]!=a[i-1][j] && a[i-1][j]!=a[i-1][j+1])//for .***
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        //neechae
         if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j] && a[i+1][j]==a[i+1][j+1])//****
        {
            cout<<"YES"<<endl;
            count=1;
            break;
            
            
        }
        else if(a[i][j]!=a[i][j+1] && a[i][j+1]==a[i+1][j] && a[i+1][j]==a[i+1][j+1])//*.**
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        else if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j] && a[i+1][j]!=a[i+1][j+1])//***.
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        else if(a[i][j]==a[i][j+1] && a[i][j]!=a[i+1][j] && a[i+1][j]!=a[i+1][j+1])//for **.*
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
        else
        {
            count=0;
        }
    }
    if(count==1)
    {
        break;
    }
   }
   if(count==0)
   {
       cout<<"NO"<<endl;
   }
}
