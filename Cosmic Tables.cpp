#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	int a[n+1][m+1];
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	while(k--){
		char b;
		int x,y;
		cin>>b>>x>>y;
		if(b=='g')
			cout<<a[x][y]<<"\n";
		else if(b=='r')
			for(int i=1; i<=m; i++)
				swap(a[x][i],a[y][i]);
		else if(b=='c')
			for(int i=1; i<=n; i++)
				swap(a[i][x],a[i][y]);
	}
}
		 			   	 			 	  		 						 		
