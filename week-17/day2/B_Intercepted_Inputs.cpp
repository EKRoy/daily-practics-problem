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
int32_t main()
{
   ios_base::sync_with_stdio(0);
  	cin.tie(0);
	int t = 1; cin >> t;
	while(t--) {
		int n; cin >> n;
		map<int,int>mp;
		for(int i = 0; i < n; i++) {
			int a; cin >> a;
			mp[a]++;
		}
		int m = n - 2;
		int n1 = 1, m1;
		while(1) {
			if(m % n1) n1++;
			else {
				m1 = m / n1;
				if(mp[n1] > 0 && mp[m1] > 0) 
					break;
				n1++;
			}
		}
		cout << n1 << " " << m1 << "\n";
    } 
    return 0;
}