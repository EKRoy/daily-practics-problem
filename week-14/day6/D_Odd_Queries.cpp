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
    int n,m; cin>>n>>m;
    vi a(n+1);
    rep(i,1,n) cin>>a[i];
    vi pre(n+1);
    pre[0]=0;
    pre[1]=a[1];
    rep(i,2,n){
        pre[i]=a[i]+pre[i-1];
    }
    while(m--){
        ll l,r,k; cin>>l>>r>>k;
        int s=r-l+1;
        l--;
        ll val=pre[r]-pre[l];
        ll result=pre[n]-val;
        result=1ll*(result+1ll*(k*s));
    if(result%2==1) py
    else pn
    }
}
int32_t main()
{
   ft
   TC(t)
   solve(); 
    return 0;
}