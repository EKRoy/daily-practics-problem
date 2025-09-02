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
int dx[8] = { 1,0,-1,0,-1,1,-1,1 };
int dy[8] = { 0,1,0,-1,-1,1,1,-1 };
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
int n;
vector<vector<bool>>visited(1005,vector<bool>(1005));
void dfs(int kxx,int kyy){
    visited[kxx][kyy]=true;
    for(int i=0;i<8;i++){
        int dxx,dyy;
        dxx=kxx+dx[i];
        dyy=kyy+dy[i];
        if(!visited[dxx][dyy] && dxx<=n && dyy<=n && dxx>=1 && dyy>=1){
            visited[dxx][dyy]=true;
            dfs(dxx,dyy);
        }
    }
}
void solve(){
   cin>>n;
   int qx,qy; cin>>qx>>qy;
   int kx,ky; cin>>kx>>ky;
   int tx,ty; cin>>tx>>ty;
   for(int i=0;i<8;i++){
    int dxx=dx[i]+qx;
    int dyy=dy[i]+qy;
    while(dxx<=n && dyy<=n && dxx>=1 && dyy>=1){
        visited[dxx][dyy]=true;
        dxx+=dx[i];
        dyy+=dy[i];
    }
   }
   dfs(kx,ky);
   if(visited[tx][ty]==true) py
   else pn
}
int32_t main()
{
   ft
 solve();
   
    return 0;
}