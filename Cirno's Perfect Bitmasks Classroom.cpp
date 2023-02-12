#include<bits/stdC++.h>
#define ll long long
using namespace std;
int i,j,k,n,m,T;
int lowbit(int x){
	return x&(-x);
}
int main(){
	cin>>T;
	while(T--){
		int x;
		cin>>x;
		int w=lowbit(x);
		if(x==1)
		{
		    cout<<3<<endl;
		    continue;
		}
		if((w^x)==0)
		{
		    w++;
		}
		cout<<w<<endl;
	}
	return 0;
}
