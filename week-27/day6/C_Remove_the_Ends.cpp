#include<bits/stdc++.h>
using namespace std;
#define ll            long long
#define TC(t)          int t; cin >> t; for(int i = 1; i <= t; i++)
#define pii            pair<int,int>
#define ft             ios::sync_with_stdio(false);  cin.tie(NULL);
#define endl             "\n"
#define pb             push_back
#define py             cout<<"YES\n";
#define pn             cout<<"NO\n";
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
void solve(){
    ll n; cin>>n;
    vi a(n),pre(n),suff(n);
    rep(i,0,n-1) cin>>a[i];
    if(a[0]>0) pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1];
        if(a[i]>0) pre[i]+=a[i];
    }
    if(a[n-1]<0) suff[n-1]=abs(a[n-1]);
    for(ll i=n-2;i>=0;i--){
        suff[i]=suff[i+1];
        if(a[i]<0){
            suff[i]+=abs(a[i]);
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=max(ans,1ll*(pre[i]+suff[i]));
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}