#include <bits/stdc++.h>
using namespace std;
#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl


void solve() {
    int n,b,count25=0,count50=0,count100=0;

    cin>>n;
    while(n--)
    {
        cin>>b;
        if(b==25){
        count25++;}
        else if(b==50)
        {
            count50++;
            count25--;
            if(count25<0)
            { cout<<"NO"<<endl;
             return;}}
        else if(b=100 )
        {
            count100++;
            if(count50<=0)
            {
                if(count25>=3)
                { count25=count25-3;
                }
                else{ cout<<"NO"<<endl;
                    return;
                }
            }
            else{
                count50--;
                count25--;
                if(count25<0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
               }
        }
       
        }
         if(count25>=0 && count50>=0 && count100>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
     solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}
