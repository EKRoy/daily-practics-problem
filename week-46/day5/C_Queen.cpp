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
   int n,root; cin>>n;
   vector<int>g[n+1],bad(n+1),childBad(n+1);
   for(int i=1;i<=n;i++){
    int p,c; cin>>p>>c;
    int u=p,v=i;
    if(u!=-1)
    g[u].pb(v);
    else{
        root=i;
    }
    if(c==1){
        childBad[u]++;
        bad[i]=1;
    }
   }
   vi ans;
   for(int i=1;i<=n;i++){
    if(root==i) continue;
    if(g[i].size()==childBad[i] && bad[i]==1){
        ans.pb(i);
    }
}
if(ans.empty()){
    cout<<-1<<nl;
}
else{
    for(int val:ans) cout<<val<<" ";
}
cout<<nl;
}
int32_t main()
{
   ft
 solve();
   
    return 0;
}