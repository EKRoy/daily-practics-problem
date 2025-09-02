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
   int n; cin>>n;
   map<int,int>mp;
   vi a(n);
   rep(i,0,n-1) {
    cin>>a[i];
    mp[a[i]%10]++;
   }
   vi b;
   for(auto [x,y]:mp){
    for(int i=0;i<min(y,3);i++){
        b.pb(x);
    }
   }
   int m=sz(b);
   for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
        for(int k=j+1;k<m;k++){
            if((b[i]+b[j]+b[k])==3 || (b[i]+b[j]+b[k])==13 || (b[i]+b[j]+b[k]==23)){
                py
                return;
            }
        }
    }
   }
   pn
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}