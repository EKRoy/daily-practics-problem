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
   int n,m; cin>>n>>m;
   map<int,set<int>>g;
   for(int i=0;i<m;i++){
    int u,v; cin>>u>>v;
    g[u].insert(v);
    g[v].insert(u);
   }
   int leaf=-1,parentOfLeaf=-1;
   int x,y;
   for(int i=1;i<=n;i++){
    if(g[i].size()==1){
        leaf=i;
        break;
    }
   }
   for(int i=1;i<=n;i++){
    if(g[i].find(leaf)!=g[i].end()){
        parentOfLeaf=i;
        y=g[i].size()-1;
        break;
    }
   }

   for(int i=1;i<=n;i++){
    if(g[i].find(parentOfLeaf)!=g[i].end() && g[i].size()>1){
        x=g[i].size();
        break;
    }
   }
   cout<<x<<" "<<y<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}