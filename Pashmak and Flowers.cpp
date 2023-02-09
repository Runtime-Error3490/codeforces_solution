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
inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}
inline int fact(int a)
{
    int ans=1;
    for(int i=1;i<=a;i++)
    {
        ans=ans*i;
    }
    return ans;
}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
const int N = 200005;
void solve() {
    int n,b,max=0,count1=1,count2=1,ans=0;
    cin>>n;
    vector<int>a;
    set<int>c;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.emplace_back(b);
        c.insert(b);
    }
    sort(a.begin(),a.end());
    max=a[n-1]-a[0];
    for(int i=1;i<=n-1;i++)
    {
        if(a[0]==a[i])
        {
            count1++;
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        if(a[n-1]==a[i])
        count2++;
    }
    if(c.size()==1)
    {
        ans=(n*(n-1))/2;
    }
    else
    {
    ans=count2*count1;
    }
    cout<<max<<" "<<ans;
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
