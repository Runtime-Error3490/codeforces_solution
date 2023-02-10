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
  int n=1e6; 
 vector<bool> is_prime(n+1, true);
 
 void Prime(){
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
	if (is_prime[i] && (long long)i * i <= n) {
		for (int j = i * i; j <= n; j += i)
			is_prime[j] = false;
	}
}
 }
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
	string s;
	cin>>s;
	vector<int>d(3);
	int x=s[0]-'A';
	int y=s.back()-'A';
	if(x==y)
	{
		cout<<"NO"<<endl;
		return;
	}
	d[x]=1;d[y]=-1;
	if(count(s.begin(),s.end(),'A'+x)== s.length() /2)
	d[3^x^y]=-1;
	else
	d[3^x^y]=1;
	int bal=0;
	for(char c:s)
	{
		bal+=d[c-'A'];
		if(bal<0)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	if(bal==0)
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
	cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}
