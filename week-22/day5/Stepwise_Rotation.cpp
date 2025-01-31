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
    ll n,q; cin>>n>>q;
    vi a(n);
    rep(i,0,n-1) cin>>a[i];
    ll k; cin>>k;
    if(k>n) {
        k%=n;
        // k=n;
    }
    ll s=n-k;
    rotate(a.begin(),a.begin()+s,a.end());
   vi pre(n+2);
   pre[0]=0;
   pre[1]=a[0];
   for(ll i=1;i<n;i++){
    pre[i+1]=pre[i]+a[i];
   }
//   for(ll i:pre) cout<<i<<" ";
//   cout<<endl;
    while(q--){
        ll l,r; cin>>l>>r;
        l--;
        ll ans=pre[r]-pre[l];
        cout<<ans<<endl;
    }

}
int32_t main()
{
   ft
   solve(); 
    return 0;
}