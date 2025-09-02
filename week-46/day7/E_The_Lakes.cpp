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
int dx[4] = {-1,0,0, 1 };
int dy[4] = { 0,1,-1,0 };
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
int n,m;
vector<vector<int>>v(1001,vector<int>(1001));
vector<vector<bool>>visited(1001,vector<bool>(1001,false));
int ans=0;
void dfs(int si,int sj){
    ans+=v[si][sj];
    visited[si][sj]=true;
    for(int i=0;i<4;i++){
        int dxx=dx[i]+si;
        int dyy=dy[i]+sj;
        if(dxx>=0 && dyy>=0 && dxx<n && dyy<m && !visited[dxx][dyy] && v[dxx][dyy]!=0){
            // 
            dfs(dxx,dyy);
        }
    }
}
void solve(){
   cin>>n>>m;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
   }
   int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visited[i][j]==false && v[i][j]!=0){
                ans=0;
                dfs(i,j);
                mx=max(mx,ans);
            }
        }
    }
   cout<<mx<<nl; 
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        visited[i][j]=false;
        v[i][j]=0;
    }
   }
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}