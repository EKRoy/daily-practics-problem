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
#define vi             vector<ll>
#define zrbits(x)      __builtin_ctzll(x)
const int MOD=1e9+7;
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   ll n;cin>>n;
   ll msb=__lg(n);
   vi ans;
   ans.pb(n);
   ll first=-1;
   for(ll i=0;i<msb;i++){
    if((1ll*n>>i) &1){
        ll x=n-(1ll<<i);
        first=(1ll<<i);
        ans.pb(x);
    }
   }
   if(first!=-1)
   ans.pb(first);
   cout<<sz(ans)<<nl;
   vrev(ans)
   for(ll x:ans) cout<<x<<" ";
   cout<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}