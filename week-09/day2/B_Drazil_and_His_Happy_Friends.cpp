#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define vrev(v)        reverse(v.begin(),v.end());
#define vsort(v)       sort(v.begin(),v.end());
#define rsort(v)       sort(v.rbegin(),v.rend());
#define vlowerB(v,x)   lower_bound(v.begin(),v.end(),x)
#define vupperB(v,x)   upper_bound(v.begin(),v.end(),x)
#define F              first
#define S              second
#define rep(i,a,b)     for(int i=a;i<=b;i++)
#define rep2(i,b,a)    for(int i=b;i>=a;i--)
#define vi             vector<int>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
int n,m,b,g,x[105],y[105],mdC[105];
int32_t main()
{
   cin >> n >> m >> b;
	rep(i,0,b-1) cin >> x[i];
	cin >> g;
	rep(i,0,g-1) cin >> y[i];
	int g_ = __gcd(n , m);
	rep(i,0,b-1) mdC[x[i]%g_] = 1;
	rep(i,0,g-1) mdC[y[i]%g_] = 1;
	rep(i,0,g_-1) if (!(mdC[i])) return cout << "No" , 0;
	cout << "Yes";
 
    return 0;
}