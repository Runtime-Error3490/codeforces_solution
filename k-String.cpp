#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	string a,b,c;
	int n;
	cin>>n>>a;
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<a.size();i+=n)
		b+=a[i];
 
		
	for(int i=0;i<n;i++)
		c+=b;
	
	b = c;
	sort(b.begin(),b.end());
	
	if(b!=a)
		cout<<-1;
	else
		cout<<c;
	return 0;
}
