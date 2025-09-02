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
   int n,s; cin>>n>>s;
   vi a(n);
   rep(i,0,n-1) cin>>a[i];
   vsort(a)
   if(n==1){
    ll k=abs(a[0]-s);
    cout<<k<<nl;
    return;
   }
   if(s<a[0]){
    cout<<a[n-1]-s<<nl;
    return;
   }
   if(s>a[n-1]){
    cout<<s-a[0]<<nl;
    return;
   }
   ll ans=a[n-1]-a[0];
   ans+=min(s-a[0],a[n-1]-s);
   cout<<ans<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}