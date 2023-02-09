#include<iostream>
#include<algorithm>
using namespace std;
int j,b[5005],i,n;
pair<int,int>a[600005];
main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	cin>>n;
	for(i=0;i<2*n;i++){scanf ("%d",&a[i].first);a[i].second=i+1;b[a[i].first]++;}
	for(i=1;i<=5000;i++){if(b[i]%2==1){cout<<-1; return 0;}}
	sort(a,a+2*n);
	for(i=0;i<n*2;i+=2){printf("%d %d\n",a[i].second,a[i+1].second);}}
