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
const int N=1e5+9;
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
int maxN=(1<<17)+9;
vector<int>a(maxN),t(2*maxN);
int marge(int l,int r,int len){
    int pw=__lg(len);
    if(pw&1){
        return l|r;
    }
    else return l^r;
}
void update(int n,int b,int e,int i,int v){
    if(i<b || i>e) {
        return;
    }
    if(b==e){
        t[n]=v;
        return;
    }
    int mid=(b+e)/2,l=2*n,r=2*n+1;
    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);
    t[n]=marge(t[l],t[r],e-b+1);
}
void build(int n,int b,int e){
    if(b==e) {
        t[n]=a[b];
        return;
    }
    int mid=(b+e)/2,l=2*n,r=2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n]=marge(t[l],t[r],e-b+1);
}
void solve(){
   int n,q; cin>>n>>q;
   n=(1<<n);
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(q--){
        int i,v; cin>>i>>v;
        update(1,1,n,i,v);
        cout<<t[1]<<nl;
    }
}
int main()
{
   ft
 solve();
   
    return 0;
}