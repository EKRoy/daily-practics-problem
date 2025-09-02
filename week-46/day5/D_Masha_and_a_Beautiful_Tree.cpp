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
vi a;
int ans=0;
void call(int l1,int r1,int l2,int r2){
    int mxL=0,mnR=INT_MAX;
    for(int i=l1;i<=r1;i++){
        mxL=max(mxL,a[i]);
    }
    for(int i=l2;i<=r2;i++){
        mnR=min(mnR,a[i]);
    }
    if(mxL>mnR){
        int R=l2;
        for(int i=l1;i<=r1;i++){
            swap(a[i],a[R]);
            R++;
        }
        ans++;
    }
    if(l1==r1) return;
    int mid1=(l1+r1)/2,mid2=(l2+r2)/2;
    call(l1,mid1,mid1+1,r1);
    call(l2,mid2,mid2+1,r2);
}
void solve(){
   int n; cin>>n;
   a.resize(n+1);
   rep(i,1,n) cin>>a[i];
   if(is_sorted(a.begin()+1,a.begin()+n+1)){
    cout<<0<<nl;
    return;
   }
   ans=0;
   int mid=(1+n)/2;
   call(1,mid,mid+1,n);
   if(is_sorted(a.begin()+1,a.begin()+n+1)){
    cout<<ans<<nl;
   }
   else cout<<-1<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}