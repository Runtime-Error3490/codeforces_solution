#include<bits/stdc++.h>
#define ll long long
using namespace std;

void akdbc(){
    ll talk[5][5];
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            cin>>talk[i][j];
        }
    }
    ll t=120;
    ll a[5]={0,1,2,3,4};
    ll ans=0;
    while(t--){
        ll curr=talk[a[0]][a[1]]+talk[a[1]][a[0]]+talk[a[1]][a[2]]+talk[a[2]][a[1]]+2*(talk[a[2]][a[3]]+talk[a[3]][a[2]])+2*(talk[a[3]][a[4]]+talk[a[4]][a[3]]);
        ans=max(ans,curr);
        next_permutation(a,a+5);
    }
    cout<<ans;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    akdbc();
    return 0;
}
