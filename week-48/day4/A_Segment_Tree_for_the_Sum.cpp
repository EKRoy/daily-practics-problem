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
vector<ll>a(N),t(4*N);
void build(int n,int b,int e){
    if(b==e){
        t[n]=a[b];
        return;
    }
    int mid=(b+e)/2,l=2*n,r=2*n+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n]=t[l]+t[r];
}
void update(int n,int b,int e,int idx,int val){
    if(idx<b || idx>e){
        return;
    }
    if(b==e){
        t[n]=val;
        return;
    }
    int mid=(b+e)/2,l=2*n,r=2*n+1;
   update(l,b,mid,idx,val);
   update(r,mid+1,e,idx,val);
    t[n]=t[l]+t[r];
}
ll sum(int n,int b,int e,int i,int j){
    if(i>e || b>j) {
        return 0;
    }
    if(b>=i && e<=j){
        return t[n];
    }
     int mid=(b+e)/2,l=2*n,r=2*n+1;
    return sum(l,b,mid,i,j)+sum(r,mid+1,e,i,j);
}
void solve(){
   int n,m; cin>>n>>m;
   for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(m--){
        int x; cin>>x;
        if(x==1){
            int idx,val; cin>>idx>>val;
            idx++;
            update(1,1,n,idx,val);
        }
        else{
            int l,r; cin>>l>>r;
            l++;
            ll ans=sum(1,1,n,l,r);
            cout<<ans<<nl;
        }
    }
}
int main()
{
   ft
  solve();
   
    return 0;
}