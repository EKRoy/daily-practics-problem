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
const int maxN=1e5+5;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   ll n,m,k; cin>>n>>m>>k;
   vi a(n);
   rep(i,0,n-1) cin>>a[i];
   ll b[m][3];
   for(ll i=0;i<m;i++){
        for(ll j=0;j<3;j++) cin>>b[i][j];
   }
   vector<ll>v(maxN);
   for(ll i=0;i<k;i++){
    ll l,r; cin>>l>>r;
    v[l]++,v[r+1]--;
   }
  for(ll i=1;i<=m;i++){
    v[i]+=v[i-1];
  }
  vector<ll>diff(n+2,0);
  for(ll i=0;i<m;i++){
    // if(v[i+1]>0){
     diff[b[i][0]]+=v[i+1]*b[i][2];
     diff[b[i][1]+1]-=(v[i+1]*b[i][2]);
    // }
  }
  for(ll i=1;i<=n+1;i++){
    diff[i]+=diff[i-1];
  }
  for(ll i=0;i<n;i++){
    a[i]+=diff[i+1];
    cout<<a[i]<<" ";
  }
}
int32_t main()
{
   ft
 solve();
   
    return 0;
}