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
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return p1.second<p2.second;
}
void solve(){
   ll n,c,d; cin>>n>>c>>d;
   vi a(n);
   rep(i,0,n-1) cin>>a[i];
   rsort(a)
   ll sum2=0;
   for(int i=0;i<min(n,d);i++){
    sum2+=a[i];
   }
   if(sum2>=c){
    cout<<"Infinity"<<nl;
    return;
   }
   if(1ll*a[0]*d<c){
    cout<<"Impossible\n";
    return;
   }
   auto ok=[&](int mid){
       ll sum=0,total=0;
    if(mid==0){
        return (1ll*a[0]*d>=c);
    }
    if(mid>=n){
        for(int i=0;i<n;i++) sum+=a[i];
    }
    else for(int i=0;i<mid;i++) sum+=a[i];
    int seg=d/mid;
    total+=sum*seg;
    int rem=d%mid;
    if(rem>=n){
        for(int i=0;i<n;i++) total+=a[i];
    }
    else for(int i=0;i<rem;i++) total+=a[i];
    return total>=c;
   };
   int l=0,r=1e16;
   int ans=-1;
   while(l<=r){
    int mid=l+(r-l)/2;
    if(ok(mid+1)){
        l=mid+1;
        ans=mid;
    }
    else r=mid-1;
   }
   cout<<ans<<nl;
}
int32_t main()
{
   ft
 TC(t) solve();
   
    return 0;
}