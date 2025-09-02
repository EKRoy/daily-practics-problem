#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
#define sz(x)          ((ll)(x).size())
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
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   int n,m; cin>>n>>m;
   int a[n][m];
   int mx=1;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) cin>>a[i][j],mx=max(mx,a[i][j]);
   }
   vector<vector<int>>v(n,vector<int>());
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==mx){
            v[i].pb(j);
        }
    }
   }
   int cnt=0;
   vector<vector<int>>s;
   for(int i=0;i<n;i++){
    if(v[i].size()!=0) s.pb(v[i]);
   }

   int k=s.size();
   map<vector<int>,int>mp;
   vector<int>h;
   for(int i=0;i<s.size();i++){
    h.pb(s[i].size());
   mp[s[i]]++;
   }
   int c=0;
   for(int it:h) {
    if(it!=1) c++;
   }
   if(c>1){
    cout<<mx<<nl;
    return;
   }
   if(mp.size()<=2) cout<<mx-1<<nl;
   else cout<<mx<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}